class Solution {
public:
    string longestPalindrome(string s) {
      int maxLen = 1;
    string result;
    int nlen = int(s.length());
    vector<vector<bool>>f(nlen,vector<bool>(nlen,false));
    
    int start = 0;
    
    for (int i = 0; i<nlen; i++) {
        f[i][i] = true;
        for (int j = 0; j<i; j++) {
            f[j][i] = s[i]==s[j]&&(i-j==1||f[j+1][i-1])?maxLen<i-j+1?maxLen = i-j+1,start = j,true:true:0;
        }
    }
    
    
    result = s.substr(start,maxLen);
    
    
    return result;
    }
};