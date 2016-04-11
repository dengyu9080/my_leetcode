class Solution {
public:
    int compareVersion(string version1, string version2) {
        vector<int>a = {0};
    vector<int>b = {0};
    for (int i =0; i<version1.size();i++) {
        if(version1[i]=='.')
            a.push_back(0);
        else
            a.back() = a.back()*10+version1[i]-'0';
        
    }
    for (int i =0; i<version2.size();i++) {
        if(version2[i]=='.')
            b.push_back(0);
        else
            b.back() = b.back()*10+version2[i]-'0';
        
    }
    for (int i =0; i<a.size()||i<b.size();i++) {
        int m = i<a.size()?a[i]:0;
        int n = i<b.size()?b[i]:0;
        if (m>n) {
            return 1;
        }
        else if(m<n)
            return -1;
    }
    return 0;
    }
};