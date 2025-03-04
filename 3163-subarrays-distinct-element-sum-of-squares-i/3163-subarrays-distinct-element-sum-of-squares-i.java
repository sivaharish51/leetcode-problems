class Solution {
    public int sumCounts(List<Integer> nums) {
        
        int sum=0;
        int n=nums.size();
            for(int i=0;i<n;i++){
                Set<Integer> s=new HashSet<>();
                for(int j=i;j<n;j++){
                    s.add(nums.get(j));
                    sum=sum+(s.size()*s.size());
                }
            }
        return sum;
    }
}