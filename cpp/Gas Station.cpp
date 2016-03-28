class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        vector<int>remain={0};
    
    for (int i=1; i<=gas.size(); i++) {
        remain.push_back(gas[i-1]-cost[i-1]+remain[i-1]);
    }
    
    if(remain[gas.size()]<0)
        return -1;
    

    
    
    int minRemain = 0;
    int minId = 0;
    for (int i = 0; i<gas.size(); i++) {
        if(remain[i]<minRemain)
        {
            minId = i;
            minRemain =remain[i];
        }
        
    }
    
    return minId;
        
    }
};