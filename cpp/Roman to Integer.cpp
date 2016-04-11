class Solution {
public:
    int romanToInt(string s) {
             unordered_map<char, int>roman2int = {{'I',1},{'X',10},{'C',100},{'M',1000},{'V',5},{'L',50},{'I',1},{'D',500}};
    
    int result = 0;
    s+='I';
    for (int i = 0; i<s.size()-1; i++)
            result += roman2int[s[i]]>=roman2int[s[i+1]]?roman2int[s[i]]:-roman2int[s[i]];

    return result;
    }
};