class Solution {
    public int tupleSameProduct(int[] nums) {
        HashMap<Integer,Integer> a=new HashMap<>();
        int c=0;
        for(int i=0;i<nums.length;i++){
            for(int j=i+1;j<nums.length;j++){
                int p=nums[i]*nums[j];
                c+=(a.getOrDefault(p,0)*8);
                a.put(p,a.getOrDefault(p,0)+1);
            }
        }
        return c;
    }
}