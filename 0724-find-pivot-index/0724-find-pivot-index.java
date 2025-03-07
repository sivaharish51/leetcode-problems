class Solution {
    public int pivotIndex(int[] nums) {
        int n=nums.length;
        int s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
        }
        int l=0;
        int r=s;
        for(int i=0;i<n;i++){
            r-=nums[i];
            if(l==r){
                return i;
            }
            l+=nums[i];
        }
        return -1;
    }
}