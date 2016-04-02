class Solution {
public:
    int strStr(string haystack, string needle) {
     int nlenhaystack = int(haystack.length());
    int nlenneedle = int(needle.length());
    if (needle.empty()) {
        return 0;
    }
    
    if (nlenhaystack<nlenneedle) {
        return -1;
    }
    

    int forend = nlenhaystack-nlenneedle+1;
    
    for (int i =0; i<forend; i++) {
        int k = i;
        for (int j = 0; j<nlenneedle; j++,k++) {
            if (haystack[k]!=needle[j]) {
                break;
            }
            else if (j==nlenneedle-1)
                return i;
        }
    }
    
    return -1;
    }
};