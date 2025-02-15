class Solution {
    public int minimumSumSubarray(List<Integer> nums, int l, int r) {
        int n=nums.size();
        int min=100000000;
        for(int i=l;i<=r;i++){
            int s=0;
            for(int j=0;j<i;j++){
                s+=nums.get(j);
            }
            if(s>0){
                min=Math.min(min,s);
            }
            int t=s;
            for(int j=i;j<n;j++){
                t+=nums.get(j)-nums.get(j-i);
                if(t>0){
                    min=Math.min(min,t);
                }
            }
        } 
        return (min!=100000000)?min:-1;
    }
}