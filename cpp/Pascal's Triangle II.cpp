class Solution {
public:
    vector<int> getRow(int rowIndex) {
            vector<int>result(rowIndex+1,1);
    
    for (int i = 1; i<=rowIndex/2; i++) {
        result[i] = result[rowIndex-i] = int((long(result[i-1])*long(rowIndex-i+1))/i);
    }
    return result;
    }
};