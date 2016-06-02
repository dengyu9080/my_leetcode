class Solution {
public:
    int mySqrt(int x) {
        if(x < 0)return -2147483648;
            int p1 = 0, p2 = min(x,46340),p3,temp;
    while (p1<p2) {
        p3 = (p1+p2)>>1;
        temp = p3*p3;
        if(temp > x)
        {
            p2 = p3-1;
        }else if(temp < x) {
            p1 = p3+1;
        }
        else if(temp == x)
            return p3;
    }
    if(p1*p1>x)
        return p1-1;
    else
        return p1;
    }
};