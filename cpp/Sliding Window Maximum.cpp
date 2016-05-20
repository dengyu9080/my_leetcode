class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         if (k <= 1) {
        return nums;
    }
    else
    {
        vector<int> result;
        int max1=nums[0],max1p = 0,max2 = INT_MIN,max2p = 0;
        for(int i =1;i<k;i++)
        {
            if(nums[i]>=max1)
            {
                max1 = nums[i];
                max1p = i;
            }
        }
        result.push_back(max1);
        
        for(int i =0;i<k;i++)
        {
            if(nums[i]>=max2&&i!=max1p)
            {
                max2 = nums[i];
                max2p = i;
            }
        }
        
        for(int i = k;i<nums.size();i++)
        {
            if(nums[i]>=max1)
            {
                if(max1p == (i-k))
                {
                    max1 = nums[i];
                    max1p = i;
                    result.push_back(max1);
                }
                else
                {
                    max2 = max1;
                    max2p = max1p;
                    max1 = nums[i];
                    max1p = i;
                    result.push_back(max1);
                }
            }
            else if(max1p == (i-k))
            {
                if(nums[i]>=max2)
                {
                    max1 = nums[i];
                    max1p = i;
                    result.push_back(max1);
                }
                else
                {
                    max1 = max2;
                    max1p = max2p;
                    result.push_back(max1);
                    
                    max2 = INT_MIN;
                    for(int j = i-k+1;j<=i;j++)
                    {
                        if(nums[j]>=max2&&j!=max1p)
                        {
                            max2 = nums[j];
                            max2p = j;
                        }
                    }
                }
            }
            else if(nums[i]>=max2)
            {
                max2 = nums[i];
                max2p = i;
                result.push_back(max1);
            }
            else if(max2p == (i-k))
            {
                max2 = INT_MIN;
                for(int j = i-k+1;j<=i;j++)
                {
                    if(nums[j]>=max2&&j!=max1p)
                    {
                        max2 = nums[j];
                        max2p = j;
                    }
                }
                result.push_back(max1);
            }
            else
                result.push_back(max1);
            
        }
        
        return result;
    }
    }
};