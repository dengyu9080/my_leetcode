class Solution {
public:
    int trap(vector<int>& height) {
              int result = 0;
    
    if (height.size()<2)return 0;
    
    
    vector<int>llevel = height;
    
    int i = 1;
    
    for (; i<height.size()-1; i++) {
        if (height[i]>=llevel[i-1])
            llevel[i] = height[i];
        else
            llevel[i] = llevel[i-1];
    }
    llevel[i] = height[i];
    
    for (i--; i!=0; i--) {
        if (height[i]>=llevel[i+1])
            llevel[i] = min(height[i],llevel[i]);
        else
            llevel[i] = min(llevel[i+1],llevel[i]);
    }
    
    for (auto x:llevel)
        result +=x;
    for (auto x:height)
        result -=x;

    
    return result;
    }
};