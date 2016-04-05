class Solution {
public:
    string longestPalindrome(string s) {
        int maxLen = 0;
    string result;
    for (int i = 0; i<s.length(); i++) {
        for (int j = i; j<s.length(); j++) {
            bool flag = true;
            for (int k = 0; k<=(j-i)/2; k++) {
//                cout<<s[i+k]<<s[j-k]<<endl;
                if(s[i+k]!=s[j-k])
                {
                    flag = false;
                    break;
                }
            }
            
            if (flag &&(j-i+1)>maxLen) {
                result = s.substr(i,(j-i+1));
                maxLen = j-i+1;
            }
            
        }
    }
    
    return result;
    }
};