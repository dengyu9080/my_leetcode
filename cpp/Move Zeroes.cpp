class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    for (int i = 0,j=0,n=int(nums.size()); j<n;j++) {
        if (nums[j]!=0)
            swap(nums[i++],nums[j]);
    }
    }
};