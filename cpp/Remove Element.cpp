class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size()==0)return 0;
        int j =0;
        int nlen = int(nums.size());
        for (int i = 0; i!=nlen; i++) {
            if (nums[i]!=val)
            {
                nums[j++] = nums[i];
            }

    }
    return j;
    }
};