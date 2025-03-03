class Solution {
    public int minimumArea(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        int l=m,r=0,t=n,b=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(grid[i][j]==1){
                    l=Math.min(l,j);
                    r=Math.max(r,j);
                    t=Math.min(t,i);
                    b=Math.max(b,i);
                }
            }
        }
        return (r-l+1)*(b-t+1);
    }
}