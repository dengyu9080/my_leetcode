class Solution {
public:
    int missingNumber(vector<int>& nums) {
            int nums_max = 0;
    int sum = 0;
    for (int i = 0; i<nums.size(); i++) {
        nums_max = max(nums_max,nums[i]);
        sum = sum+nums[i];
    }
    if (nums_max==(nums.size()-1)) {
        return int(nums.size());
    }
    else
    {
    sum = sum-nums_max;
    return (nums_max)*(nums_max-1)/2-sum;
    }
    }
};