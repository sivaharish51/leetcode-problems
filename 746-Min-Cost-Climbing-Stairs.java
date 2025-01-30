class Solution {
    public int minCostClimbingStairs(int[] cost) {
        int n=cost.length;
        //int[] a=new int[n];
        for(int i=2;i<n;i++){
            cost[i]=Math.min(cost[i-2],cost[i-1])+cost[i];
        } 
        return Math.min(cost[n-2],cost[n-1]);
    }
}