class Solution {
public:
    int trap(vector<int>& height) {
               int result = 0;
    
    if (height.size()<2)return 0;
    
    vector<int>llevel = {height[0]};
    vector<int>rlevel = {*(--height.end())};
    
    for (int i = 1 ; i<height.size(); i++) {
        if (height[i]>=llevel[i-1])
            llevel.push_back(height[i]);
        else
            llevel.push_back(llevel[i-1]);
    }
    
    for (int i = int(height.size())-2 ; i>=0; i--) {
        
        if (height[i]>=rlevel[int(height.size())-2-i])
            rlevel.push_back(height[i]);
        else
            rlevel.push_back(rlevel[int(height.size())-2-i]);
    }
    for (int i = 0 ; i<height.size(); i++)
        result = result+(llevel[i]>rlevel[height.size()-1-i]?(rlevel[height.size()-1-i]-height[i]):(llevel[i]-height[i]));
    
    return result;
    }
};