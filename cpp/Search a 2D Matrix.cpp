class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int nrow = int(matrix.size());
    
    if (target>matrix.back().back()||target<matrix[0][0]) {
        return false;
    }
    
    
    
    int a = 0,b = nrow,c=0;
    while(a<b) {
        c = (a+b)/2;
        if (matrix[c][0]==target) {
            return true;
        }
        else if(matrix[c][0]<target)
            a = c+1;
        else
            b = c;
    }
    b--;
    return find(matrix[b].begin(), matrix[b].end(), target)!=matrix[b].end();
    }
};