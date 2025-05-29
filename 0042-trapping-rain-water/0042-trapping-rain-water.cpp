class Solution {
public:
    int trap(vector<int>& height) {
        if(height.empty()){
            return 0;
        }
        int a=0;
        int l=0;
        int r=height.size()-1;
        int lmax=height[l],rmax=height[r];
        while(l<r){
            if(lmax<rmax){
                a+=lmax-height[l];
                lmax=max(lmax,height[++l]);
            }
            else{
                a+=rmax-height[r];
                rmax=max(rmax,height[--r]);
            }
        } 
        return a;  
    }
};