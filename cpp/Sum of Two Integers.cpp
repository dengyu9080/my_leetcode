int add(int a,int b){
    int c = 0;
    int temp = 0;
    int carry = 0;
    for(int i = 0;i<32;i++){
        temp = (a&1)+(b&1)+carry;
        carry = temp/2;
        temp = temp%2;
        c |=(temp<<i);
        a = a>>1;
        b = b>>1;
    }
    return c;
}
class Solution {
public:
    int getSum(int a, int b) {
        int c = add(a,b);
        if(c <0){
            return -add(~c,1);
        }
        else
            return c;
    }
};