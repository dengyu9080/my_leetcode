class Solution {
public:
    bool isPalindrome(string s) {
        int n = s.length();
    
    int i = 0;
    while (i<n) {
        if(s[i]<='Z'&&s[i]>='A')
            s[i] = s[i]+32;
        if(s[n]<='Z'&&s[n]>='A')
            s[n] = s[n]+32;
            
        if(((s[i]<='z'&&s[i]>='a')||(s[i]<='9'&&s[i]>='0'))&&
           ((s[n]<='z'&&s[n]>='a')||(s[n]<='9'&&s[n]>='0')))
        {
//            cout<<s[i]<<i<<"   ";
//            cout<<s[n]<<n<<endl;
            if(s[i]==s[n])
            {
                i++;
                n--;
                continue;
            }
            else
                return false;
        }
        else if(((s[i]<='z'&&s[i]>='a')||(s[i]<='9'&&s[i]>='0')))
        {
            while (!((s[n]<='z'&&s[n]>='a')||(s[n]<='Z'&&s[n]>='A')||(s[n]<='9'&&s[n]>='0'))) {
                {
                   n--;
                    if (n<i) {
                        return true;
                    }
                }
                
            }
        }
        else
        {
            while (!((s[i]<='z'&&s[i]>='a')||(s[i]<='Z'&&s[i]>='A')||(s[i]<='9'&&s[i]>='0'))) {
                {
                    i++;
                    if (i>n) {
                        return true;
                    }
                }
                
            }
        }
            
           
    }
    
    return true;
    }
};