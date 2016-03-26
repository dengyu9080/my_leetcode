class Solution {
public:
    void nextPermutation(vector<int>& nums) {
       if (nums.size()<2) return;
    
    
    int maxDropId = int(nums.size())-1;
    
    for (;maxDropId>0&&(nums[maxDropId]<=nums[maxDropId-1]);maxDropId--);

    
    
    
    if (maxDropId==0) {
        reverse(nums.begin(),nums.end());
    }
    else
    {
//        if (maxDropId==nums.size()-1) {
//            swap(nums[maxDropId-1],nums[maxDropId]);
//            return;
//        }
        int minBigId = maxDropId;
        for(;nums[minBigId]>nums[maxDropId-1]&&minBigId<nums.size();minBigId++);
        
        minBigId--;
        
        swap(nums[maxDropId-1],nums[minBigId]);
        
        reverse(&nums[maxDropId],&nums[nums.size()]);
        
    }
    
    return;
        
    }
};