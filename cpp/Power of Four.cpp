class Solution {
public:
    bool isPowerOfFour(int num) {
         unordered_set<int>powerof4 = {1,4,16,64,256,1024,4096,16384,65536,262144,1048576,4194304,16777216,67108864,268435456,1073741824};
    return find(powerof4.begin(), powerof4.end(), num)!=powerof4.end();
    }
};