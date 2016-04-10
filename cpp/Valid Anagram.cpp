class Solution {
public:
    bool isAnagram(string s, string t) {
    //         if (s.size()!=t.size()) {
    //     return false;
    // }
    // unordered_map<char, int>my_map;
    
    // for (auto x:s) {
    //     my_map[x] =my_map[x]?my_map[x]+1:1;
    // }
    
    // for (auto x:t) {
    //     if(my_map.find(x)!=my_map.end()){
    //         my_map[x] = my_map[x]-1;
    //         if (my_map[x]<0)
    //             return false;
    //     }
    //     else
    //         return false;
    // }
    // return true;
        if (s.size()!=t.size()) {
        return false;
    }
    unordered_map<char, int>my_map;
    
    for (auto x:s) {
        my_map[x] = my_map[x]+1;
    }
    
    for (auto x:t) {
        my_map[x] = my_map[x]-1;
        if (my_map[x]==-1) {
            return false;
        }
    }

    return true;
    }
};