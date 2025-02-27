class Solution {
    public int[] occurrencesOfElement(int[] nums, int[] q, int x) {
        int n=nums.length;
        int m=q.length; 
        Map<Integer,Integer> mp=new HashMap<>();
        int cnt=0;
        for(int i=0;i<n;i++){
            if(nums[i]==x){
                cnt++;
                mp.put(cnt,i);
            }
        }
        for(int i=0;i<m;i++){
            if(mp.containsKey(q[i])){
                q[i]=mp.get(q[i]);
            }
            else{
                q[i]=-1;
            }
        }
    return q;
    }
}