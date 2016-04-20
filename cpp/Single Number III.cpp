class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
            int a = 0;
    for (int i = 0; i<nums.size(); i++) {
        a ^= nums[i];
    }
    sort(nums.begin(), nums.end());
    int i = 0;
    for (; i<nums.size()&&nums[i] == nums[i+1]; i = i+2);
    
    return vector<int>{nums[i],nums[i]^a};
    }
};