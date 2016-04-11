class Solution {
public:
    bool isHappy(int n) {
        if (n<=0) {
        return false;
    }
    else
    {
        while (1) {
            if (n<10) {
                if(n!=1&&n!=7)
                    return false;
                else
                    return true;
            }
            int temp = 0;
            while ((n/10)!=0) {
                temp = temp+(n%10)*(n%10);
                n = n/10;
            }
            n =  temp+n*n;
            
        }
    }
        
    }
};