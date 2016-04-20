class Solution {
public:
    int maxSubArray(vector<int>& nums) {
    //     int maxSub1 = nums[0],maxSub2 = nums[0];
    // for (int i = 1; i<nums.size(); i++) {
    //     maxSub1 = maxSub1<0?nums[i]:maxSub1+nums[i];
    //     maxSub2 = max(maxSub2,maxSub1);
    // }
    // return maxSub2;
            int maxSub1 = nums[0],maxSub2 = nums[0];
    for (int i = 1; i<nums.size(); i++) {
        maxSub1 = max(nums[i],maxSub1+nums[i]);
        maxSub2 = max(maxSub2,maxSub1);
    }
    return maxSub2;
    }
};