class Solution {
public:
    int countDigitOne(int n) {
            if(n<1)
        return 0;
    else if(n <10)
        return 1;
    else
    {
        int maxZeroend = 1;
        while ((n/maxZeroend)>=10) {
            maxZeroend *= 10;
        }
        if((n/maxZeroend) == 1)
            return (n%maxZeroend+1)+countDigitOne(n%maxZeroend)+countDigitOne(maxZeroend-1);
        else
            return countDigitOne(maxZeroend*2-1)+countDigitOne(n%maxZeroend)+(n/maxZeroend-2)*countDigitOne(maxZeroend-1);
    }
    }
};