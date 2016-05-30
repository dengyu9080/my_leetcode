class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        if(matrix.size() == 0 ||matrix[0].size() == 0)
        return 0;
    int maxLimit = int(min(matrix.size(),matrix[0].size()));
    
    bool flag = false;
    int result = 0;
    for (int j = 0; j < matrix.size(); j++) {
        for (int k = 0; k < matrix[0].size(); k++){
            if(matrix[j][k] == '1')
            {
                flag = true;
                result = 1;
                matrix[j][k] = 1;
            }
            else
            {
                matrix[j][k] = 0;
            }
        }
    }
    
    
    for (int i = 1; i <= maxLimit && flag; i++) {
        flag = false;
        for (int j = 0; j < (matrix.size()-i); j++) {
            for (int k = 0; k < (matrix[0].size()-i); k++) {
                if(matrix[j][k] >= i && matrix[j][k+1] >= i && matrix[j+1][k] >= i && matrix[j+1][k+1] >= i)
                {
                    matrix[j][k]++;
                    result = i+1;
                    flag = true;
                }
            }
        }
    }
    return result*result;
    }
};