class Solution {
    public int sumOfUnique(int[] nums) {
        int n=nums.length;
        HashMap<Integer,Integer> h=new HashMap<>();
        for(int i=0;i<n;i++){
            h.put(nums[i],h.getOrDefault(nums[i],0)+1);
        }
        int s=0;
        for(int i=0;i<n;i++){
            if(h.get(nums[i])==1){
                s+=nums[i];
            }
        }
        return s;
    }
}