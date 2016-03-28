class Solution {
public:
    int candy(vector<int>& ratings) {
         vector<int>cost(ratings.size(),1);
    
    for (int i =1; i<ratings.size(); i++) {
        if (ratings[i]>ratings[i-1]) {
            cost[i] = cost[i-1]+1;
        }
    }
    
    for (int i = (int(ratings.size())-2); i>=0; i--) {
        if (ratings[i]>ratings[i+1]) {
            cost[i] = max(cost[i],cost[i+1]+1);
        }
    }
    
    
    
    return accumulate(cost.begin(),cost.end(),0);

    }
};