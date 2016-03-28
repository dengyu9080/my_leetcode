class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int one = 0,two = 0,three = 0,onetemp =0,twotemp = 0;
    for (int i:nums) {
        one = onetemp^i;
        two = ((~twotemp)&onetemp&i)|(twotemp&(~onetemp)&i)|(twotemp&(~onetemp)&(~i));
        three =(twotemp)&(~onetemp)&i;
        one = one&(~three);
        two = two&(~three);
        onetemp =one;
        twotemp = two;
        three = 0;
        
    }
    return one;
    }
};