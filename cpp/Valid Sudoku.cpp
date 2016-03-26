class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
            unordered_map<char,int> mymap;
            int i,j,k,l,m,n;
            
    for (i = 0; i<9; i++) {
        mymap ={};
        for(j = 0;j<9;j++)
        {
            if(board[i][j]!=46)
            {
                
                if (mymap.find(board[i][j])==mymap.end()) {
                    mymap[board[i][j]] = 1;
                }
                else
                    return false;
                
            }
            
        }
        mymap ={};
        for(j = 0;j<9;j++)
        {
            if(board[j][i]!=46)
            {
                if (mymap.find(board[j][i])==mymap.end()) {
                    mymap[board[j][i]] = 1;
                }
                else
                    return false;
                
            }
            
        }
    }
    
    
    for (i = 0; i<3; i++) {
        
        for(j = 0;j<3;j++)
        {
            mymap ={};
            
            for (k = 0; k <3; k++) {
                for (l = 0; l<3; l++) {
                    m = k+i*3;
                    n = l+j*3;
                    if(board[m][n]!=46)
                    {
                        if (mymap.find(board[m][n])==mymap.end()) {
                            mymap[board[m][n]] = 1;
                        }
                        else
                            return false;
                        
                    }
                }
            }
            
            
        }
    }
    
    
    
    return true;
    }
};