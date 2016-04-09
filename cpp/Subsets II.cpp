class Solution {
public:
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        set<vector<int>>result;//nb
    sort(nums.begin(), nums.end());
    int nlen = int(nums.size());
    vector<int> v;
    
    for (int i = 1<<nlen,j=0;i>0; i--) {
        j = 0;
        v.erase(v.begin(),v.end());
        while (j<nlen) {
            if (i&1<<j) {
                v.push_back(nums[j]);
            }
            j++;
        }
        result.insert(v);
    }

    vector<vector<int>>real_result;
    copy(result.begin(),result.end(),back_inserter(real_result));
    
    return real_result;
    }
};