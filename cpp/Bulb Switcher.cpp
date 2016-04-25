class Solution {
public:
    int bulbSwitch(int n) {
          int result = 1;
    for(;(result*result)<=n;result++);
    return result-1;  
    }
};