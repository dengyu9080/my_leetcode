class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
            unordered_set<int>numset1;
    for (int x:nums1) {
        numset1.insert(x);
    }
    
    unordered_set<int>numset2;
    vector<int>result;
    for (auto p = nums2.begin() ; p!=nums2.end(); p++) {
        if(numset1.find(*p) != numset1.end() &&numset2.find(*p) == numset2.end())
        {
            result.push_back(*p);
            numset2.insert(*p);
        }
        if(result.size()>=numset1.size())
            break;
    }
    
    return result;
    }
};