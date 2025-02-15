class Solution {
    public int getLargestOutlier(int[] nums) {
        int n = nums.length;
        int sum = 0;
        HashMap<Integer,Integer> h = new HashMap<>();
        int max = Integer.MIN_VALUE;
        for(int i : nums) {
            sum += i;
            h.put(i,h.getOrDefault(i,0)+1);
        }
        for(int i : nums){
            int sum_left = (sum-i);
            if(sum_left%2!=0) {
                continue;
            }
            if(h.containsKey(sum_left/2)){
                if(sum_left/2!=i) max = Math.max(max,i);
                if(sum_left/2==i && h.get(i)>1) max = Math.max(max,i);
                 
            }
        }
        return max;

    }
}