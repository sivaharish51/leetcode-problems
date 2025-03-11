class Solution {
    public int[] numberGame(int[] nums) {
        int n=nums.length;
        Arrays.sort(nums);
        int[] a=new int[n];
        for(int i=0;i<n;i=i+2){
            int f=nums[i];
            int s=nums[i+1];
            a[i]=s;
            a[i+1]=f;
        }
        return a;
    }
}