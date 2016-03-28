class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = int(matrix.size());
    int n = int(matrix[0].size());
    
    
    
    vector<int>colDot(n,1);
    vector<int>rowDot(m,1);
    for(int i = 0;i<m;i++){
        for (int j =0 ; j<n; j++) {
            colDot[j] = colDot[j]*(matrix[i][j]!=0);
            rowDot[i] = rowDot[i]*(matrix[i][j]!=0);
        }
    }
    
    for (int i = 0; i<n; i++) {
        if (colDot[i]==0) {
            for (int j = 0; j<m; j++)
                matrix[j][i] = 0;
        }
    }
    for (int i = 0; i<m; i++) {
        if (rowDot[i]==0) {
            for (int j = 0; j<n; j++)
                matrix[i][j] = 0;
        }
    }
    }
};