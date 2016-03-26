class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
            sort(nums.begin(), nums.end());
    int result = nums[0]+nums[1]+nums[2];
    int i = 0;
    int j = i+1;
    
    int elen = int(nums.size());
    int k = elen-1;
    
    int sum = result;
    
    int diff = abs(target-sum);
    int mindiff = diff;
    int absdiff = diff;
    int forend = elen-2;
    for (; i<forend; i++) {
        
        if (i&&nums[i]==nums[i-1])
            continue;
        j = i+1;
        k = elen-1;
        
        while (j<k) {
            
            sum = nums[i]+nums[j]+nums[k];
            diff = target- sum;
            absdiff = abs(diff);
            
            if(absdiff<mindiff)
            {
                mindiff = absdiff;
                result = sum;
            }
            
            if (diff ==0)
                return target;
            else if (diff>0){
                j++;
            }
            else{
                k--;
            }
            
        }
    }
    return result;
    }
};