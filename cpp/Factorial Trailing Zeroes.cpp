class Solution {
public:
    int trailingZeroes(int n) {
        int result = 0,fivepower = 5;
    while (n>=fivepower&&fivepower!=1808548329) {
        result = result+n/fivepower;
        fivepower = fivepower*5;
    }
    
    return result;

    }
};