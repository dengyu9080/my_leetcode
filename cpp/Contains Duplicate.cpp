class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
    //     unordered_map<int, int>nEachInt;
    // for (int i = 0; i<nums.size(); i++) {
    //     nEachInt[nums[i]]=nEachInt[nums[i]]+1;
    //     if (nEachInt[nums[i]]==2) {
    //         return true;
    //     }
    // }
    // return false;
        // unordered_set<int>nEachInt;
        // for (int i = 0; i<nums.size(); i++) {
        //     if (nEachInt.find(nums[i])!=nEachInt.end()) {
        //         return true;
        //     }
        //     else
        //         nEachInt.insert(nums[i]);
                
        // }
        // return false;
            unordered_set<int>nEachInt;
    int i = 0;
    for (; i<nums.size()&&nEachInt.find(nums[i])==nEachInt.end(); i++) {
            nEachInt.insert(nums[i]);
    }
    
    return i!=nums.size();
    }
};