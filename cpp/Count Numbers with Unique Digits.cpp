class Solution {
public:
    int countNumbersWithUniqueDigits(int n) {
          int conbination = 9,result = 1;
          n = min(n,10);
    for(int i = 1;i <= n;i++)
    {
        result += conbination;
        conbination = conbination*(10-i);
    }
    return result;  
    }
};