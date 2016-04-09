class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
    //     int nlen = int(nums.size());
    // vector<vector<int>>result(1<<nlen,vector<int>(NULL));

    // sort(nums.begin(), nums.end());
    
    // for (int i = 1<<nlen,j=0,k=0;i>0; i--) {
    //         j = 0;
    //         while (j<nlen) {
    //             if (k&1<<j) {
    //                 result[k].push_back(*(nums.begin()+j));
    //             }
    //             j++;
    //         }
    //         k++;
    // }
    
    // return result;
    int nlen = int(nums.size());
    vector<vector<int>>result(1<<nlen,nums);
    sort(nums.begin(), nums.end());
    
    
    for (int i = 1<<nlen,j=0,k=0;i>0; i--) {
            j = 0;
        result[k].erase(result[k].begin(),result[k].end());
            while (j<nlen) {
                if (k&1<<j) {
                    result[k].push_back(*(nums.begin()+j));
                }
                j++;
            }
            k++;
    }
    
    return result;
    }
};