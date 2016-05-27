class Solution {
public:
    int maxProduct(vector<int>& nums) {
        if(nums.size() == 0)return 0;
    int maxPos = nums[0],maxPosEnd = nums[0]>0?nums[0]:1,maxNegEnd = nums[0]<0?nums[0]:1;
    for (int i = 1; i < nums.size(); i++) {
        if(nums[i] > 0)
        {
            int temp1 = nums[i]*maxPosEnd;
            int temp2 = nums[i]*maxNegEnd;
            
            if(temp1 > maxPos)
            {
                maxPos = temp1;
                maxPosEnd = temp1;
            }
            else if(temp1 > 0)
                maxPosEnd = temp1;
            else
                maxPosEnd = 1;
        
            if(temp2 < 0)
                maxNegEnd = temp2;
            else
                maxNegEnd = 1;
            
        }
        else if(nums[i] < 0)
        {
            int temp1 = nums[i]*maxNegEnd;
            int temp2 = nums[i]*maxPosEnd;
            
            if(temp1 > maxPos)
            {
                maxPos = temp1;
                maxPosEnd = temp1;
            }
            else if(temp1 > 0)
                maxPosEnd = temp1;
            else
                maxPosEnd = 1;
            
            
            if(temp2 < 0)
                maxNegEnd = temp2;
            else
                maxNegEnd = 1;
        }
        else
        {
            maxPos = max(maxPos,0);
            maxPosEnd = 1;
            maxNegEnd = 1;
        }
//        cout<< nums[i] <<":("<<maxPos<<", "<<maxPosEnd<<" ,"<<maxNegEnd<<")"<<endl;
    }
    
    return maxPos;
    }
};