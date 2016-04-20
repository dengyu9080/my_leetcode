class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
              for (int i = 0; i<matrix.size(); i++) {
        if (matrix[i].front()<=target&&matrix[i].back()>=target) {
            
            for (int l = 0,r = int(matrix[i].size())-1,mid = (l+r)/2; l<=r;mid = (l+r)/2) {
                if (matrix[i][mid]<target) {
                    l = mid+1;
                }
                else if (matrix[i][mid]>target) {
                    r = mid-1;
                }
                else
                    return true;
            }
            
        }
    }
    return false;
    }
};