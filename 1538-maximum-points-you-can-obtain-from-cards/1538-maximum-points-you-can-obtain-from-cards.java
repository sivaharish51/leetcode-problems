class Solution {
    public int maxScore(int[] cardpoints, int k) {
        int n=cardpoints.length;
        int mx=0;
        int s=0;
        for(int i=0;i<k;i++){
            s+=cardpoints[i];
            mx=Math.max(mx,s);
        }  
        for(int i=k-1;i>=0;i--){
            s-=cardpoints[i];
            s+=cardpoints[cardpoints.length-k+i];
            mx=Math.max(mx,s);
        }
        return mx;
    }
}