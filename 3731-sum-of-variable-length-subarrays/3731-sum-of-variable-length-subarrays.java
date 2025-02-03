class Solution {
    public int subarraySum(int[] nums) {
        int n=nums.length;
        int s=0,a=0;
        for(int i=0;i<n;i++){
            s=Math.max(0,i-nums[i]);
            for(int j=s;j<=i;j++){
                a+=nums[j];
            }
        }
        return a;
    }
}