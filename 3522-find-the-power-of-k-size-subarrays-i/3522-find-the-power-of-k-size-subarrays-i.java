class Solution {
    public int[] resultsArray(int[] nums, int k) {
        int n=nums.length;
        int[] a=new int[n];
        Arrays.fill(a,1);
        int[] r=new int[n-k+1];
        Arrays.fill(r,-1);
        for(int i=1;i<n;i++){
            if(nums[i]-nums[i-1]==1){
                a[i]=a[i-1]+1;
            }
        }
        for(int i=0;i<n;i++){
            if(a[i]>=k){
                r[i-k+1]=nums[i];
            }
        }
        return r;
    }
}