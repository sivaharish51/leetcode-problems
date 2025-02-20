class Solution {
    public String findDifferentBinaryString(String[] nums) {
        int n=nums.length;
        String s="";
        for(int i=0;i<n;i++){
            //String s1=nums[i];
            s += (nums[i].charAt(i)== '0')?"1":"0";
        }
        return s;
    }
}