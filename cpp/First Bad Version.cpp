// Forward declarationdeclaration of isBadVersion API.
bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
              int l = 1,r = n, mid = (l+r)/2;
    for (; l<r;mid = l/2+r/2+(l&1&r)) {
        if (isBadVersion(mid)) {
            r = mid;
        }
        else
            l = mid+1;
    }
    return mid;
    }
};