class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
              int a = 0,b = int(nums.size()),c=0;
    while(a<b) {
        c = (a+b)/2;
        if (nums[c]==target) {
            return c;
        }
        else if(nums[c]<target)
            a = c+1;
        else
            b = c;
    }
    return b;
    }
};