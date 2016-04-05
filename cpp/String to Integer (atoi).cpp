class Solution {
public:
    int myAtoi(string str) {
       int i = 0;
    int nlen = int(str.length());
    for(;isspace(str[i])&&i!=nlen;i++);//invalid space
    
    int sign = str[i]=='-'?i++,-1:str[i]=='+'?i++,1:1;
    
    
    
    int num = 0;
    
    
    for(;i!=nlen;i++){
        if (!isdigit(str[i]))break;
        if (num>INT_MAX/10||(num==INT_MAX/10&&(str[i]-'0')>(INT_MAX%10))) {
            return sign==1?INT_MAX:INT_MIN;
            
        }
        num = num*10+str[i]-'0';
    }
    return sign*num;
    }
};