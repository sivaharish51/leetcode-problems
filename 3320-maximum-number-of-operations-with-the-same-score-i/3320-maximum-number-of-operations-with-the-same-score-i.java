class Solution {
    public int maxOperations(int[] nums) {
        int n=nums.length;
        int s=nums[0]+nums[1];
        int c=1;
        for(int i=2;i<n;i=i+2){
            if(i+1<n && s==(nums[i]+nums[i+1])){
                c++;
            }
            else{
                break;
            }
        }
        return c;
    }
}