class Solution {
    public int lenLongestFibSubseq(int[] a) {
        int n=a.length;
        Set<Integer> s=new HashSet<>();
        for(int i:a){
            s.add(i);
        }  
        int mx=0;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                int p=a[j];
                int cur=a[i]+a[j];
                int l=2;
                while(s.contains(cur)){
                    int t=cur;
                    cur+=p;
                    p=t;
                    mx=Math.max(mx,++l);
                }
            }
        }
        return mx;
    }
}