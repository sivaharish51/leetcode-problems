class Solution {
    public boolean canPlaceFlowers(int[] f, int n) {
        for(int i=0;i<f.length;i++){
            boolean l=false;
            boolean r=false;
            if(i==0 || f[i-1]==0){
                l=true;
            }
            if(i==f.length-1 || f[i+1]==0){
                r=true;
            }
            if(l && r && f[i]==0){
                f[i]=1;
                n--;
            }
        }
        return n<=0;

    }
}