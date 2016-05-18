class Solution {
public:
    int hIndex(vector<int>& citations) {
    //       int npaper = int(citations.size());
    // int i = 0;
    // for (; i<citations.size()&&citations[i]<(npaper-i); i++) {
    // };
    // return npaper-i;
    
    //  if (citations.size()==0)
    //     return 0;
    // int p1 = 0,p2 =int(citations.size())-1,p3 ;
    // while (p1<p2) {
    //     p3 = (p1+p2)/2;
    //     if(citations[p3]>(citations.size()-p3))
    //         p2 = p3-1;
    //     else if(citations[p3]<(citations.size()-p3))
    //         p1 = p3+1;
    //     else
    //         return int(citations.size()-p3);
    // }
    // if(citations[p1]<(citations.size()-p1))
    //     return int(citations.size()-p1-1);
    // else
    //     return int(citations.size()-p1);
    
    int nsize = int(citations.size());
    if (nsize == 0)
        return 0;
    
    int p1 = 0,p2 = nsize-1,p3 ;
    while (p1<p2) {
        p3 = (p1+p2)>>1
        ;
        if(citations[p3]>(nsize-p3))
            p2 = p3-1;
        else if(citations[p3]<(nsize-p3))
            p1 = p3+1;
        else
            return (nsize-p3);
    }
    if(citations[p1]<(nsize-p1))
        return (nsize-p1-1);
    else
        return (nsize-p1);
    }
};