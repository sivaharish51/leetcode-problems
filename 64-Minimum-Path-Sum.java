class Solution {
    public int minPathSum(int[][] grid) {
        int n=grid.length;
        int m=grid[0].length;
        int [][] a=new int[n][m];
        //a[0][0]=grid[0][0];
        int s=0;
        for(int i=0;i<n;i++){
            s+=grid[i][0];
            a[i][0]=s;
        }
        int su=0;
        for(int i=0;i<m;i++){
            su+=grid[0][i];
            a[0][i]=su;
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<m;j++){
                a[i][j]=Math.min(a[i][j-1],a[i-1][j])+grid[i][j];
            }
        }
        return a[n-1][m-1];
    }
}