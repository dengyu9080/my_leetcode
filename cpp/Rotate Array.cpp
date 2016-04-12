class Solution {
public:
    void rotate(vector<int>& nums, int k) {
           if (k%nums.size()!=0) {
               k = k%nums.size();
        vector<int>temp(nums.end()-k,nums.end());
        
        for (int i = 0;i<nums.size()-k;i++) {
            swap(nums[i%k],nums[i+k]);
        }
        for (int i = 0;i<k;i++) {
            nums[i] = temp[i];
        }
    }
    }
};