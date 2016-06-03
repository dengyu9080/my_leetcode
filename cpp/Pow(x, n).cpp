class Solution {
public:
    double myPow(double x, int n) {
           if(n <0)
    {
        if(n == -2147483648)
            return 1/x *myPow(1/x, 2147483647);
        else
            return myPow(1/x, -n);
    }
    else if(n == 0)
        return 1.0;
    else if(n == 1)
        return x;
    else if( n == 2)
        return x*x;
    else
    {
        double temp = myPow(x,n>>1);
        if(n%2 == 0)
            return temp*temp;
        else
            return temp*temp*x;
    }
    }
};