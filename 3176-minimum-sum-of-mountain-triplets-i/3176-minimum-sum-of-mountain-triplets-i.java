class Solution {
    public int minimumSum(int[] nums) {
        int n=nums.length;
        int mn=Integer.MAX_VALUE;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    for(int k=j+1;k<n;k++){
                        if(nums[k]<nums[j]){
                            mn=Math.min(mn,nums[i]+nums[j]+nums[k]);
                        }
                    }
                }
            }
        }
        return mn==Integer.MAX_VALUE?-1:mn;
    }
}