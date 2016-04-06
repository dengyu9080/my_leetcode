class Solution {
public:
    string longestPalindrome(string s) {
      int maxLen = 0;
    vector<int> maxId(2,0);
    string result;
    int nlen = int(s.length());
    vector<vector<int>>f(nlen,vector<int>(nlen,0));
    
    for (int i = 0; i<nlen; i++) {
        for (int j = i; j<nlen; j++) {
            f[i][j] =  longestP(s,i,j);
            if (f[i][j]>maxLen) {
                maxLen = f[i][j];
                result = s.substr(i,j-i+1);
            }
        }
    }
    
    return result;
    }
private:
int longestP(string s,int i,int j)
{
    if (i==j) return 1;
    else if(i==j-1&&s[i]==s[j]) return 2;
    else if(s[i]==s[j]&&(i+1)<=(j-1) &&longestP(s,i+1,j-1)== j-i-1)
        return j-i+1;
    else
        return 0;
}
};