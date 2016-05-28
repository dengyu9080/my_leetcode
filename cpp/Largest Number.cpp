bool isSmaller (string i,string j)
{
    return (i+j)<(j+i);
}
class Solution {
public:
    string largestNumber(vector<int>& nums) {
            vector<string> numsstring;
    for (int i = 0; i < nums.size(); i++) {
        numsstring.push_back(to_string(nums[i]));
    }
    
    sort(numsstring.rbegin(), numsstring.rend(),isSmaller);
    
    string result;
    for (int i = 0; i < nums.size(); i++) {
        result = result+ numsstring[i];
    }
        while (result[0] == '0'&&result.size()>1) {
        result.pop_back();
    }
    return result;
    }
};