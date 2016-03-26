class Solution {
public:
    string getPermutation(int n, int k) {
         string temple;
    for (int i = 1; i<=n; i++) {
        temple+=i+48;
    }
    
    
    
    string result;
    int xulie = 1;
    for (int i = 1; i<n; i++) {
        xulie*=i;
    }
    k--;
    for(int templen = n-1;templen>0;templen--)
    {
        
        
        int j = k/xulie;
        result += temple[j];
        temple.erase(temple.begin()+j);
        k=k%xulie;
        xulie = xulie/templen;
    }
    result +=temple;
    
    
    
    return result;
    }
};