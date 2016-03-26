class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
            vector<vector<int>>result;
    if (nums.size()<4)return result;
    
    sort(nums.begin(), nums.end());
    
    int nend = int(nums.size())-1;
    int forend1 = int(nums.size()) - 3;
    int forend2 = int(nums.size()) - 2;
    
    int i = 0;
    int j,k,l,sum;
    for (; i<forend1; i++) {
        
        if (i&&nums[i]==nums[i-1])
            continue;
        
        for (j=i+1; j<forend2; j++) {
            if (j>(i+1)&&nums[j]==nums[j-1]) continue;
            k = j+1;
            l = nend;
            while (k<l) {
                sum = nums[i]+nums[j]+nums[k]+nums[l];
                if (sum<target)
                    k++;
                else if (sum == target)
                {
                    result.push_back({nums[i],nums[j],nums[k],nums[l]});
                    k++;
                    l--;
                    while(nums[k]==nums[k-1]&&nums[l]==nums[l+1]&&k<l)
                    k++;
                }
                else
                    l--;
                
            }
        }
    }
    
    
    return result;
    }
};