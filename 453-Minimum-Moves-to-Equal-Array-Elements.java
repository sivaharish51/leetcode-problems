class Solution {
    public int minMoves(int[] nums) {
        int mn=nums[0];
        for(int i=0;i<nums.length;i++){
            mn=Math.min(mn,nums[i]);
        } 
        int d=0;
        for(int i=0;i<nums.length;i++){
            d+=(nums[i]-mn);
        }
        return d;
    }
}