class Solution {
    public int maxFrequencyElements(int[] nums) {
        Arrays.sort(nums);
        Map<Integer,Integer> m=new HashMap<>();
        for(int i=0;i<nums.length;i++){
            m.put(nums[i],m.getOrDefault(nums[i],0)+1);
        }
        int mx=0;
        for(int val:m.values()){
            mx=Math.max(mx,val);
        }
        int a=0;
        for(int v:m.values()){
            if(v==mx){
                a+=v;
            }
        }
        return a;

    }
}