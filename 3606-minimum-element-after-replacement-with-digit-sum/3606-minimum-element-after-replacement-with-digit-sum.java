class Solution {
    public int minElement(int[] nums) {
        int n=nums.length;
        int mx=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            int v=nums[i];
            int s=0;
            while(v>0){
                s+=(v%10);
                v=v/10;
            }
            mx=Math.min(mx,s);
        }  
        return mx; 
    }
}