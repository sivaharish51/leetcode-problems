class Solution {
    public long minIncrementOperations(int[] nums, int k) {
        int n=nums.length;
        long d1=0,d2=0,d3=0,d;
        for(int i=0;i<n;i++){
            d=Math.min(d1,Math.min(d2,d3))+Math.max(k-nums[i],0);
            d1=d2;
            d2=d3;
            d3=d;
        }
        return Math.min(d1,Math.min(d2,d3));
    }
}