class Solution {
public:
    bool isPowerOfThree(int n) {
    // int power3[20] ={1,3,9,27,81,243,729,2187,6561,19683,59049,177147,531441,1594323,4782969,14348907,43046721,129140163,387420489,1162261467};
    // for (int i =0; i<20; i++) {
    //     if (power3[i]==n) {
    //         return true;
    //     }
    // }
    // return false;
    return n==1||n==3||n==9||n==27||n==81||n==243||n==729||n==2187||n==6561||n==19683||n==59049||n==177147||n==531441||n==1594323||n==4782969||n==14348907||n==43046721||n==129140163||n==387420489||n==1162261467;
    }
};