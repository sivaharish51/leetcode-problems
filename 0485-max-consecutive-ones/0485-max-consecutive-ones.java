class Solution {
    public int findMaxConsecutiveOnes(int[] nums) {
       int n=nums.length;
       int mx=0;
       int c=0;
       for(int i=0;i<n;i++){
            if(nums[i]==1){
                c++;
                 mx=Math.max(mx,c);
            }
            else{
               
                c=0;
            }
       }  
       return mx;
    }
}