class Solution {
public:
    int rangeBitwiseAnd(int m, int n) {
             for (int i = 0,j = 1; i<32 && m>=j; i++) {
        if(m&j &&(n-m+1)>j)
        {
            m = m^j;
        }
        j = j<<1;
    }
    
    
    return m;
    }
};