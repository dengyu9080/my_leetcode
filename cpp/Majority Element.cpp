class Solution {
public:
    int majorityElement(vector<int>& nums) {
    //         unordered_map<int, int>nEach;
    // int n = int(nums.size());
    // int halfn = n/2;
    // for (int i = 0; i<n; i++) {
    //     nEach[nums[i]] = nEach[nums[i]]+1;
    //     if(nEach[nums[i]]>halfn)
    //         return nums[i];
    // }
    // return 0;
        int result = nums[0];
    int count = 0;
    for (int i = 0; i<nums.size(); i++) {
        if (nums[i]==result)
            count++;
        else
        {
            if (--count==0) {
                result = nums[i];
                count = 1;
            }
        }
    }
    return result;
    }
};