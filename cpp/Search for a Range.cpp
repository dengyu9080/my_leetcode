class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
    int l = int(distance(nums.begin(),lower_bound(nums.begin(),nums.end(),target)));
    int r = int(distance(nums.begin(),prev(upper_bound(nums.begin(),nums.end(),target))));
    if (nums[l]!=target) 
        return vector<int>{-1,-1};
    else
        return vector<int>{l,r};
    }
};