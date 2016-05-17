class Solution {
public:
    string getHint(string secret, string guess) {
        int bull = 0,cows = 0;
    
    vector<int>falsenum1(10,0);
    vector<int>falsenum2(10,0);
    
    for (int i = 0; i<secret.size(); i++) {
        if (secret[i] == guess[i]) {
            bull++;
        }
        else
        {
            falsenum1[secret[i]-'0']++;
            falsenum2[guess[i]-'0']++;
        }
    }
    for (int i = 0; i<10; i++) {
        cows+=min(falsenum1[i],falsenum2[i]);
    }
    return to_string(bull)+"A"+to_string(cows)+"B";
    }
};