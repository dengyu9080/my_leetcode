class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int>result;
    auto i = digits.end();
    int flag = 1;
    int res = 0;
    auto j = result.begin();
    do
    {
        i--;
        res = *i+flag;
        flag = res/10;
        j = result.insert (j , res%10 );
        
    }while (i!=digits.begin());
        
    if (flag) {
        j = result.insert (j ,flag);
    }
    
    return result;
    }
};