class Solution {
public:
    int titleToNumber(string s) {
    //         int result = 0;
    // for (char x:s) {
    //     result = result*26+x-'A'+1;
    // }
    // return result;
        int result = 0;
    for (int i=0; i<s.size(); i++) {
        result = result*26+s[i]-'A'+1;
    }
    return result;
    }
};