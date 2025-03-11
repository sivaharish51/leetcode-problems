class Solution {
    public int[] findIndices(int[] nums, int in, int val) {
        int n=nums.length;
        int[] a=new int[2];
        a[0]=-1;
        a[1]=-1;
        for(int i=0;i<n-in;i++){
            for(int j=i+in;j<n;j++){
                if(Math.abs(nums[i]-nums[j])>=val){
                    a[0]=i;
                    a[1]=j;
                    return a;
                }
            }
        }
        return a;
    }
}