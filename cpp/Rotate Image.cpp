class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
            vector<vector<int>>matrix2  =matrix;
    for (int i = 0; i!=matrix.size(); i++) {
        for (int j = 0; j!=matrix[0].size(); j++) {
            matrix[j][int(matrix[0].size())-1 - i]= matrix2[i][j];
        }
    }
    }
};