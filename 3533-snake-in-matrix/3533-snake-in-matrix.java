class Solution {
    public int finalPositionOfSnake(int n, List<String> c) {
        int[][] a=new int[n][n];
        int v=0;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                a[i][j]=v;
                v++;
            }
        }  
        int l=0,r=0;
        for(int i=0;i<c.size();i++){
            if(c.get(i).equals("RIGHT")){
                r++;
            }
            if(c.get(i).equals("LEFT")){
                r--;
            }
            if(c.get(i).equals("DOWN")){
                l++;
            }
            if(c.get(i).equals("UP")){
                l--;
            }
        }
        return a[l][r];
    }
}