class Solution {
    public int longestMonotonicSubarray(int[] nums) {
        int n=nums.length;
        if(n==1) return 1;
        int c=1,c1=1,mc=0;
        for(int i=1;i<n;i++){
            if(nums[i]>nums[i-1]){
                c++;
                c1=1;
            }
            else if(nums[i]<nums[i-1]){
                c1++;
                c=1;
            }
            else{
                c=1;
                c1=1;
            }
            mc=Math.max(mc,Math.max(c,c1));
        }
        return mc;
    }
}