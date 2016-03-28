class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int m = int(matrix.size());
    int n = int(matrix[0].size());
    
    int zerocolflag = 1;
    for (auto x:matrix[0]){
        if (x==0) {
            zerocolflag =0;
        }
    }

    
    for(int i = 1;i<m;i++){
        for (int j =0 ; j<n; j++) {
            matrix[0][j] = matrix[0][j]*(matrix[i][j]!=0);
            matrix[i][0] = matrix[i][0]*(matrix[i][j]!=0);
        }
    }
    
    for (int i = 1; i<m; i++) {
        if (matrix[i][0]==0)
            fill(matrix[i].begin(), matrix[i].end(), 0);
    }
    
    for (int i = 0; i<n; i++) {
        if (matrix[0][i]==0) {
            for (int j = 0; j<m; j++)
                matrix[j][i] = 0;
        }
    }
    if (zerocolflag==0) {
        fill(matrix[0].begin(), matrix[0].end(), 0);
    }
    }
};