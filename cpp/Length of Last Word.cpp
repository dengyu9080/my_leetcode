class Solution {
public:
    int lengthOfLastWord(string s) {
          int result = 0;
    auto p = s.rbegin();
    while(*p == ' ')
    {
        p++;
    }
    
    for (; p != s.rend(); p++) {
        
        if(*p!= ' ')
            result++;
        else
            break;
    }
    return result;
    }
};