class Solution {
    public int winningPlayerCount(int n, int[][] pick) {
        int l=pick.length;
        int[][] a=new int[n][11];
        for(int i=0;i<l;i++){
            int pl=pick[i][0];
            int ba=pick[i][1];
            a[pl][ba]++;
        }   
        int c=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<11;j++){
                if(a[i][j]>i){
                    c++;
                    break;
                }
            }
        }
        return c;
    }
}