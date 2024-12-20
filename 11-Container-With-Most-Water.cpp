class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int m=0;
        while(l<r){
            int mini=min(height[l],height[r]);
            int w=r-l;
            m=max(m,(w*mini));
            if(height[l]>=height[r]){
                r--;
            }  
            else{
                l++;
            }
        }   
        return m;
    }
};