class Solution {
    public int minFlips(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        if(n==1) return 0;
        int cnt=0;
        for(int i=0;i<m;i++){
            for(int j=0;j<n/2;j++){
                if(grid[j][i]!=grid[n-j-1][i]){
                    cnt++;
                }
            }
        }
        int cnt1=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<m/2;j++){
                if(grid[i][j]!=grid[i][m-j-1]){
                    cnt1++;
                }
            }
        }
        return Math.min(cnt,cnt1);
    }
}