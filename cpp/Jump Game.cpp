class Solution {
public:
    bool canJump(vector<int>& nums) {
     vector<bool>flag(nums.size(),false);
    flag[0] = true;
    for (int i = 0; i < nums.size() && flag[i];i++) {
        for (int j = nums[i]; j > 0 && !flag[i+j]; j--) {
            flag[i+j] = true;
            if(flag.back())
                return true;
        }
    }
    return flag.back();
    }
};