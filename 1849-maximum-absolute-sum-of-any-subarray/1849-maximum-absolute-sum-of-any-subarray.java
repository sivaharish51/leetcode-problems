class Solution {
    public int maxAbsoluteSum(int[] nums) {
        int n=nums.length;
        int mx=Integer.MIN_VALUE,mi=Integer.MAX_VALUE;
        int s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
            s=Math.max(s,0);
            mx=Math.max(mx,s);
        }
        int s1=0;
        for(int i=0;i<n;i++){
            s1+=nums[i];
            s1=Math.min(s1,0);
            mi=Math.min(mi,s1);
        }
        mi=-mi;
        return Math.max(mx,mi);
    }
}