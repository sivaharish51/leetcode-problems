class Solution {
    public int[] sortEvenOdd(int[] nums) {
        int n=nums.length;
        int[] o=new int[n/2];
        int[] e=new int[(n+1)/2];
        int[] ans=new int[n];
        int o1=0,e1=0;
        for(int i=0;i<n;i++){
            if(i%2==0){
                e[e1]=nums[i];
                e1++;
            }
            else{
                o[o1]=nums[i];
                o1++;
            }
        }
        Arrays.sort(o);
        Arrays.sort(e);
        int e2=0,o2=o.length-1;
        for(int i=0;i<n;i++){
            if(i%2==0){
                ans[i]=e[e2];
                e2++;
            }
            else{
                ans[i]=o[o2];
                o2--;
            }
        }
        return ans;
    }
}