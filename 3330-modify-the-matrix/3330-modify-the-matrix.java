class Solution {
    public int[][] modifiedMatrix(int[][] matrix) {
        int n=matrix.length;
        int m=matrix[0].length;
        int[] a=new int[m];
        for(int i=0;i<m;i++){
            int mx=0;
            for(int j=0;j<n;j++){
                mx=Math.max(mx,matrix[j][i]);
            }
            a[i]=mx;
        }
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(matrix[j][i]==-1){
                    matrix[j][i]=a[i];
                }
            }
        }
        return matrix;
    }
}