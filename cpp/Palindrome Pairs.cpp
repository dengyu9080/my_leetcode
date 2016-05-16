class Solution {
public:
    vector<vector<int>> palindromePairs(vector<string>& words) {
    //         vector<vector<int>>result;
    // for (int i = 0; i<words.size(); i++) {
    //     for (int j = 0; j<words.size(); j++) {
    //         if(i==j)
    //             continue;
    //         if(is_palindrome(words[i],words[j]))
    //             result.push_back(vector<int>{i,j});
                
    //     }
    // }
    
    // return result;
    vector<vector<int>>result;
    unordered_map<string, int>word_map;
    for (int i = 0; i<words.size(); i++) {
        word_map[words[i]] = i;
    }
    
    for (int i = 0; i<words.size(); i++) {
        for (int m = 0; m<words[i].size(); m++) {
            string temp1(words[i].rend()-m,words[i].rend());
            string temp2(words[i].rbegin(),words[i].rbegin()+m);
            
            if(is_palindrome(words[i],temp1)&&word_map.find(temp1)!=word_map.end()&&temp1!=words[i])
                result.push_back(vector<int>{i,word_map[temp1]});
            if(is_palindrome(temp2,words[i])&&word_map.find(temp2)!=word_map.end()&&temp2!=words[i])
                result.push_back(vector<int>{word_map[temp2],i});
        }
        string temp3(words[i].rbegin(),words[i].rend());
        if(temp3!=words[i]&&is_palindrome(words[i],temp3)&&word_map.find(temp3)!=word_map.end())
            result.push_back(vector<int>{i,word_map[temp3]});
    }
    
    return result;
    }
    
    
bool is_palindrome(string &word1,string &word2)
{
    int word1len = int(word1.size()),word2len = int(word2.size());
    if (word1len>word2len) {
        for (int i = 0,j = word2len-1; j>=0;) {
            if (word1[i++]!=word2[j--]) {
                return false;
            }
        }
        for (int i = word2len,j = word1len-1; i<j;) {
            if (word1[i++]!=word1[j--]) {
                return false;
            }
        }
        return true;
    }else{
        for (int i = 0,j = word2len-1; i<word1len;) {
            if (word1[i++]!=word2[j--]) {
                return false;
            }
        }
        for (int i = 0,j = word2len-word1len-1; i<j;) {
            if (word2[i++]!=word2[j--]) {
                return false;
            }
        }
        return true;
    }
    
}
};