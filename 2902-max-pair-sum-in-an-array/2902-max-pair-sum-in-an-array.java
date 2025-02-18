class Solution {
    public int maxSum(int[] nums) {
        int n=nums.length;
        Map<Integer,Integer> m=new HashMap<>();
        int [] a=new int[n];
        int max=-1;
        for(int i=0;i<n;i++){
            int mx=-1;
            int num=nums[i];
            while(num>0){
                int r=num%10;
                mx=Math.max(mx,r);
                num=num/10;
            }
            if(m.containsKey(mx)){
                max=Math.max(max,m.get(mx)+nums[i]);
                m.put(mx,Math.max(m.get(mx),nums[i]));
            }
            else{
                m.put(mx,nums[i]);
            }
        }
        return max;
    }
}