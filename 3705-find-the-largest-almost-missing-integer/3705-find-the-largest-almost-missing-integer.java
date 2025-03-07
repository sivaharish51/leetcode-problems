class Solution {
    public int largestInteger(int[] nums, int k) {
        int n=nums.length;
        Map<Integer,Integer> m=new HashMap<>();
        for(int i=0;i<=n-k;i++){
            Set<Integer> s=new HashSet<>();
            for(int j=i;j<i+k;j++){
                if(!s.contains(nums[j])){
                    m.put(nums[j],m.getOrDefault(nums[j],0)+1);
                    s.add(nums[j]);
                }
            }
        }
        int mx=-1;
        for(int key:m.keySet()){
            if(m.get(key)==1 && mx<key){
                mx=key;
            }
        }
        return mx;
    }
}