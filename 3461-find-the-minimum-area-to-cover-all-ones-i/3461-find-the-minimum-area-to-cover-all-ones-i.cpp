class Solution {
public:
    int minimumArea(vector<vector<int>>& grid) {
        int n=grid.size(),m=grid[0].size();
        int t=n,b=-1,l=m,r=-1;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                t=min(t,i);
                b=max(b,i);
                l=min(l,j);
                r=max(r,j);
                }
            }
        }
        return (b-t+1)*(r-l+1);
    }
};