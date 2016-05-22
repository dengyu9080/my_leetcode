class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
         vector<int >result;
    if (matrix.size()  == 0) {
        return result;
    }

    int mode[4][2] = {{0,1},{1,0},{0,-1},{-1,0}};
    int nrows = int(matrix.size()),ncols = int(matrix[0].size());
    
    int flag = 0,flagMax = (2*min(nrows,ncols)-1)+(nrows>ncols);
    int tempx = 0,tempy = -1;
    while (flag<flagMax) {
        if(flag&1)
        {
            for (int i = 0;i<(nrows-((flag+1)>>1)); ++i) {
                tempx += mode[flag&3][0];
                tempy += mode[flag&3][1];
                result.push_back(matrix[tempx][tempy]);
            }
        }else{
            for (int i = 0; i<(ncols-(flag>>1)); i++) {
                tempx += mode[flag&3][0];
                tempy += mode[flag&3][1];
                result.push_back(matrix[tempx][tempy]);
            }
        }
        
        flag++;
    }
    return result;
    }
};