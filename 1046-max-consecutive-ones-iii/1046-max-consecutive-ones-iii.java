class Solution {
    public int longestOnes(int[] nums, int k) {
        int n=nums.length;
        int c=0;
        int mx=0,l=0;
        for(int i=0;i<n;i++){
            if(nums[i]==0){
                c++;
            }
            while(c>k){
                if(nums[l]==0){
                    c--;
                }
                l++;
            }
            mx=Math.max(mx,i-l+1);
        } 
        return mx;
    }
}