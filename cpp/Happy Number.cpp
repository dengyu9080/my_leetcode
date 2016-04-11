class Solution {
public:
    bool isHappy(int n) {
        int mychange[10]={0,1,4,9,16,25,36,49,64,81};
    bool happy[100]={0,1,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,1,0,0,0,1,0,0,0,0,1,0,0,1,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,1,0,0,0,0,1,0,0,1,0,0,1,0,0};
    if (n<=0) {
        return false;
    }
    else
    {
        while (1) {
            if (n<100) return happy[n];
            
            int temp = 0;
            while (n>0) {
                temp = temp+mychange[n%10];
                n = n/10;
            }
            n = temp;
        }
    }
    }
};