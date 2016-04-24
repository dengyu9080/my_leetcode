class Solution {
public:
    string reverseString(string s) {
            string result(s);
    for (int i = 0; i<s.length(); i++) {
        result[i] = s[s.length()-1-i];
    }
    return result;
    }
};