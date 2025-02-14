class Solution {
    public static long gcd(long a, long b) {
        if (b == 0) {
            return a;
        }
        return gcd(b, a % b);
    }
    public int maxLength(int[] nums) {
        int a=0;
        for(int i=0;i<nums.length;i++){
            long p=1,lcm=nums[i],gcd=nums[i];
            for(int j=i;j<nums.length;j++){
                if(p>100000000000L) break;
                p=p*nums[j];
                gcd=gcd(gcd,nums[j]);
                lcm=(lcm*nums[j])/gcd(lcm,nums[j]);
                if(p==lcm*gcd){
                    a=Math.max(a,j-i+1);
                }
            }
        } 
        return a; 
    }
}