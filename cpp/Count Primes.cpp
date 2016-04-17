class Solution {
public:
    int countPrimes(int n) {
            vector<bool> isPrimes(n,true);
    int count = 0;
    for (int i = 2; i<n; i++) {
        if (isPrimes[i]) {
            count++;
            for (int j = 1; (j*i)<n; j++) {
                isPrimes[i*j] = false;
            }
        }
    }
    return count;
    }
};