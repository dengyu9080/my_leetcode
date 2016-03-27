class Solution {
public:
    vector<int> grayCode(int n) {
            vector<int>result(1<<n,0);
    
    for (int i = n-1; i>=0; i--) {
        
        for (int j = 0; j<(1<<(i+1)); j++) {
            
            if((j/(1<<i))%2==1)
                result[j] = result[j]|(((result[j]&(1<<(i+1)))^(1<<(i+1)))>>1);
            else
                result[j] = result[j]|((result[j]&(1<<(i+1)))>>1);
        }
    }
    for (int i = 0; i<n-1; i++) {
        for (int j = (1<<(i+1)); j<(1<<n); j++) {
            if ((j/(1<<(i+1)))%2==1) {
                result[j] = result[j]|(result[(1<<(i+1))-1-(j%(1<<(i+1)))]&(1<<i));
            }
            else
                result[j] = result[j]|(result[j%(1<<(i+1))]&(1<<i));
        }
    }

    
    return result;
    }
};