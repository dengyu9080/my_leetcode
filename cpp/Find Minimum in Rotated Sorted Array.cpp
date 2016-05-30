class Solution {
public:
    int findMin(vector<int>& nums) {
            int p1 = 0,p2 = int(nums.size()-1),p3;
    while(p1 < p2)
    {
        p3 = (p1+p2)/2;
        if(nums[p3]<nums[p2])
            p2 = p3;
        else if(nums[p3]>nums[p2])
            p1 = p3+1;
    }
    return nums[p1];
    }
};