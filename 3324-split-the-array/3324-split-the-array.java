class Solution {
    public boolean isPossibleToSplit(int[] nums) {
        int n=nums.length;
        Map<Integer,Integer> m=new HashMap<>();
        for(int i=0;i<n;i++){
            m.put(nums[i],m.getOrDefault(nums[i],0)+1);
        } 
        for(int key:m.keySet()){
            if(m.get(key)>2){
                return false;
            }
        }   
        return true;
    }
}