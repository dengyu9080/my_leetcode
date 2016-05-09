class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int n = int(triangle.size());
    
    vector<int>result1(n,triangle[0][0]);
    vector<int>result2(n,triangle[0][0]);
    
    for (int i =1;i<n; i++) {
        if (i%2 ==1) {
            result2[0] = result1[0]+triangle[i][0];
            for (int j = 1; j<i; j++) {
                result2[j] = min(result1[j-1],result1[j])+triangle[i][j];
            }
            result2[i] =result1[i-1]+triangle[i][i];
        }
        else
        {
            result1[0] = result2[0]+triangle[i][0];
            for (int j = 1; j<i; j++) {
                result1[j] = min(result2[j-1],result2[j])+triangle[i][j];
            }
            result1[i] =result2[i-1]+triangle[i][i];
        }
    }
    
    if (n%2 ==1) {
        return *(min_element(result1.begin(), result1.end()));
    }
    else
        return *(min_element(result2.begin(), result2.end()));
    }
};