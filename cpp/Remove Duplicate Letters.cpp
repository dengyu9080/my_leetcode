class Solution {
public:
    string removeDuplicateLetters(string s) {
           vector<int> charNumber(26,0);
    vector<vector<int>> charPosition(26);
    for (int i = 0; i<s.size(); i++) {
        charNumber[s[i]-'a']++;
        charPosition[s[i]-'a'].push_back(i);
    }
    
    string result;
    while (accumulate(charNumber.begin(), charNumber.end(), 0)>0) {
        for (int i = 0; i<26; i++) {
            if(charNumber[i]>0)
            {
                int j = i+1;
                for (; j<26; j++)
                {
                    if(charNumber[j]>0&&charPosition[i][0]>charPosition[j].back())
                        break;
                }
                
                if (j == 26) {
                    result.push_back(i+'a');
                    charNumber[i] = 0;
                    for (int j = i+1; j<26; j++) {
                        if(charNumber[j]>0)
                        {
                            while (charPosition[j][0]< charPosition[i][0]) {
                                charPosition[j].erase(charPosition[j].begin());
                            }
                        }
                    }
                    i = -1;
                }
                else
                {
                    continue;
                }
            }
        }
    }
    
    
    return result;
    }
};