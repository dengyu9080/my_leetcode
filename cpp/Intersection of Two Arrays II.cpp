class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
           unordered_map<int,int>numset1;
    for (int x:nums1) {
        numset1[x]++;
    }
    
    vector<int>result;
    for (auto p = nums2.begin() ; p!=nums2.end(); p++) {
        if(numset1.find(*p)!=numset1.end()&&numset1[*p])
        {
            numset1[*p]--;
            result.push_back(*p);
        }
        if(result.size()>=nums1.size())
            break;
    }
    
    return result;
    }
};