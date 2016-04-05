class Solution {
public:
    string addBinary(string a, string b) {
        int carry = 0;
    int nMax = int(max(a.length(),b.length()));
    int nMin = int(min(a.length(),b.length()));
    string result;
    int i = 0;
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());
    for (; i!=nMin; i++) {
        
        result.push_back((a[i]-'0'+b[i]-'0'+carry)%2+'0');
        carry = (a[i]-'0'+b[i]-'0'+carry)/2;
        
    }
    
    if(a.length()>b.length())
    {
        for (; i!=nMax; i++) {
            result.push_back((a[i]-'0'+carry)%2+'0');
            carry = (a[i]-'0'+carry)/2;
        }
    }
    else{
        for (; i!=nMax; i++) {
            result.push_back((b[i]-'0'+carry)%2+'0');
            carry = (b[i]-'0'+carry)/2;
        }
    }
    
    
    if (carry) {
        result.push_back('1');
    }
    reverse(result.begin(), result.end());
    return result;
    }
};