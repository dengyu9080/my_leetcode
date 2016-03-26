class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
          vector<vector<int>>result;
    if(nums.size()<3)return result;
    
    sort(nums.begin(),nums.end());
    
    int nlen = int(nums.size());
    int i = 0;
    int j = i+1;
    int k = nlen-1;
    int sum = 0;
    for(;i<nlen-2;i++)
    {
        if(i>=1&&nums[i]==nums[i-1])continue;
        j = i+1;
        k = nlen-1;
        while(j<k)
        {
            sum = nums[i]+nums[j]+nums[k];
            if(sum>0)
                k--;
            else if(sum==0)
            {
                result.push_back({nums[i],nums[j],nums[k]});
                j++;
                k--;
                while (nums[j]==nums[j-1]&&j<k)j++;
            }
            else j++;
            
        }
        
        
    }
    
    return result;

    }
};