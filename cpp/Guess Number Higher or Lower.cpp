// Forward declaration of guess API.
// @param num, your guess
// @return -1 if my number is lower, 1 if my number is higher, otherwise return 0
int guess(int num);

class Solution {
public:
    int guessNumber(int n) {
        int up = n,low = 1,mid,flag;
        while(1){
            mid = (up>>1) + (low>>1) + (up&1&low);
            //mid = (up+low)/2;
            flag = guess(mid);
            if(flag == 0)
                return mid;
            else if(flag == 1)
            {
                low = mid + 1;
            }
            else
                up = mid -1;
        }
    }
};