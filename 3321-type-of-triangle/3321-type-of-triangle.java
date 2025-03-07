class Solution {
    public String triangleType(int[] nums) {
        Set<Integer> s=new HashSet<>();
        if(nums[0]+nums[1]<=nums[2]){
            return "none";
        }
         if(nums[0]+nums[2]<=nums[1]){
            return "none";
        }
         if(nums[1]+nums[2]<=nums[0]){
            return "none";
        }
        for(int i=0;i<nums.length;i++){
            s.add(nums[i]);
        }
        if(s.size()==1){
            return "equilateral"; 
        }
        if(s.size()==2){
            return "isosceles"; 
        }
        return "scalene";
    }
}