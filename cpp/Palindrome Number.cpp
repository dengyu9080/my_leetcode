class Solution {
public:
    bool isPalindrome(int x) {
    if (x<0) return false;
    if (x<10) return true;
    int i = 10;
    for (; (x/i)>9; i=i*10);
    for (; i>1&&x!=0;)
    {
        if ((x%10)==(x/i)) {
            x = x-(x/i)*i;
            x = x/10;
            i = i/100;
        }
        else
            return false;
    };
    return true;
    }
};