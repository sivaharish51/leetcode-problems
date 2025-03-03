class Solution {
    public int maxOperations(int[] nums, int k) {
        int n=nums.length;
        int l=0,r=n-1;
        int c=0;
        Arrays.sort(nums);
        while(l<r){
            if(nums[l]+nums[r]==k){
                l++;
                r--;
                c++;
            }
            else if(nums[l]+nums[r]<k){
                l++;
            }
            else{
                r--;
            }
        }
        return c;  
    }
}