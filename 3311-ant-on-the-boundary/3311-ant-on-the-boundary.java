class Solution {
    public int returnToBoundaryCount(int[] nums) {
        int n=nums.length;
        int l=0,c=0;
        for(int i=0;i<n;i++){
            l+=nums[i];
            if(l==0){
                c++;
            }
        }
        return c;
    }
}