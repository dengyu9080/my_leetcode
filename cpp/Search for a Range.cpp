class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
      int nlen = int(nums.size());
    int a = 0,b = nlen,c = a;
    vector<int>result(2,-1);
    for (a =0,b =nlen; a<=b; ) {
        c = (a+b)/2;
        if (nums[c]<target) {
            a = c+1;
        }
        else if(nums[c]>target)
            b = c-1;
        else{
            result[0] = c;
            b = c-1;
        }
    }
    
    if (result[0] !=-1) {
        for (a =result[0],b =nlen-1; a<=b; ) {
            c = (a+b)/2;
            if (nums[c]>target) {
                b = c-1;
            }
            else if(nums[c]<target)
                a = c+1;
            else{
                result[1] = c;
                a = c+1;
            }
        }
    }
    return result;
    }
};