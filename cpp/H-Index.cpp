class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
    int i = 1;
    while(i<=citations.size()&&*(citations.end()-i)>=i)i++;
    return i-1;
        
    }
};