class Solution {
public:

bool coinCount(vector<int>& coins,int i,int amount,int &minCount,int count)
{
    if (coins.size()==i+1) {
        if (amount%coins[i] ==0)
        {
            count = count+amount/coins[i];
            minCount = min(minCount,count);
            return true;
        }
        else
            return false;
    }
    else
    {
        int nowUp = amount/coins[i];
        int amountTemp;
        bool flag = false;
        for (int j = nowUp; j>=0; j--) {
            amountTemp = amount - j*coins[i];
            count = count +j;
            
            if(count>minCount)
            {
                count = count -j;
                break;
            }
            
            if (coinCount(coins,i+1,amountTemp,minCount,count)) {
                flag = true;
            }
            count = count -j;
        }
        return flag;
    }
}
    int coinChange(vector<int>& coins, int amount) {
       sort(coins.rbegin(), coins.rend());
    int minCount = INT_MAX;
    int count = 0;
    if(coinCount(coins,0,amount,minCount,count))
        return minCount;
    else
        return -1;
    }
};