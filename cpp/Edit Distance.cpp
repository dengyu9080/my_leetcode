class Solution {
public:
    int minDistance(string word1, string word2) {
       int len1 = int(word1.size());
    int len2 = int(word2.size());
    if (len1 ==0) {
        return len2;
    }
    else if(len2 ==0)
        return len1;
    vector<vector<int>>distance(len1+1,vector<int>(len2+1,0));
    
    for (int i = 0; i<=len1; i++) {
        distance[i][0] = i;
    }
    for (int j = 0; j<=len2; j++) {
        distance[0][j] = j;
    }
    for (int i = 1; i<=len1; i++) {
        for (int j = 1; j<=len2; j++) {
            if (word1[i-1]==word2[j-1]) {
                distance[i][j] = distance[i-1][j-1];
            }
            else
                distance[i][j] = min(min(distance[i-1][j-1]+1, distance[i-1][j]+1), distance[i][j-1]+1);
        }
    }
    
    return distance.back().back();
    }
};