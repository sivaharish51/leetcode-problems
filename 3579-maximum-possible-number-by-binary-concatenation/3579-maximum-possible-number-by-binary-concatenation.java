class Solution {
    public int maxGoodNumber(int[] nums) {
        String[] s=new String[nums.length];
        for(int i=0;i<nums.length;i++){
            s[i]=Integer.toBinaryString(nums[i]);
        }   
        int v1=Integer.parseInt(s[0]+s[1]+s[2], 2),v2=Integer.parseInt(s[0]+s[2]+s[1], 2),v3=Integer.parseInt(s[1]+s[0]+s[2], 2),v4=Integer.parseInt(s[1]+s[2]+s[0], 2),v5=Integer.parseInt(s[2]+s[0]+s[1], 2),v6=Integer.parseInt(s[2]+s[1]+s[0], 2);
        return Math.max(Math.max(v1,v2),Math.max(Math.max(v3,v4),Math.max(v5,v6)));
    }
}