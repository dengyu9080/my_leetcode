class Solution {
public:
// bool isUgly(int num) {
//     if (num<=0) return false;
//     while (num%30==0) num = num/30;
//     while (num%15==0) num = num/15;
//     while (num%10==0) num = num/10;
//     while (num%6==0) num = num/6;
//     while (num%5==0) num = num/5;
//     while (num%3==0) num = num/3;
//     while (num%2==0) num = num/2;
//     return num==1;
// }


int nthUglyNumber(int n) {
    
    // int result = 1;
    // for (int i = 0; i<n;i++) {
    //     while (!isUgly(result++)) {
    //     }
    // }
    // return result-1;
    vector<int> result = {1};
    int temp2,temp3,temp5,tempmin;
    int p2 = 0,p3 = 0,p5 = 0;
    while (result.size()!=n) {
        temp2 = result[p2]<<1;
        temp3 = result[p3]*3;
        temp5 = result[p5]*5;
        tempmin  = min(min(temp2,temp3),temp5);
        if(tempmin == temp2)
            p2++;
        if(tempmin == temp3)
            p3++;
        if(tempmin == temp5)
            p5++;
        result.push_back(tempmin);
    }
    return result.back();
}


    
};