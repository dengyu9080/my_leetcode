bool isSmaller (pair<int, int> &i,pair<int, int> &j) { return ((i.first*i.second)<(j.first*j.second)); }

class Solution {
public:
    int maxEnvelopes(vector<pair<int, int>>& envelopes) {
        if(envelopes.size() == 0)return 0;
            sort(envelopes.begin(), envelopes.end(), isSmaller);
    vector<int >result(envelopes.size(),1);
    for (int i = 0 ; i < envelopes.size(); i++) {
        for (int j = 0 ; j< i; j++) {
            if((envelopes[i].first >envelopes[j].first && envelopes[i].second > envelopes[j].second))
                result[i] = max(result[i],result[j]+1);
        }
    }
    return *max_element(result.begin(), result.end());
    }
};