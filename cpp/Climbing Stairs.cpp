class Solution {
public:
    int climbStairs(int n) {
            if (n<3)return n;
    else
    {
        int step1 = 1;
        int step2 = 2;
        int temp;
        for (int i =3; i<=n; i++) {
            temp = step2;
            step2 = step1+step2;
            step1 = temp;
        }
        return step2;
    }
    }
};