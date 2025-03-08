class Solution {
    public int minimumRecolors(String b, int k) {
        int n=b.length();
        int mn=10000000;
        int c=0;
        for(int i=0;i<k;i++){
            if(b.charAt(i)=='W'){
                c++;
            }
        }
        mn=Math.min(mn,c);
        for(int i=k;i<n;i++){
            if(b.charAt(i-k)=='W'){
                c--;
            }
            if(b.charAt(i)=='W'){
                c++;
            }
            mn=Math.min(mn,c);
        }
        return mn;
    }
}