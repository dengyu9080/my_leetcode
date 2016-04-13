class Solution {
public:
    vector<int> countBits(int num) {
            vector<int>result(num+1,0);
    for (int i = 1,j = 0; i<=num; i++) {
        if (i==(1<<j)) {
            j++;
            result[i] = 1;
        }
        else
            result[i] = result[i&~(1<<(j-1))]+1;
    }
    return result;
    }
};