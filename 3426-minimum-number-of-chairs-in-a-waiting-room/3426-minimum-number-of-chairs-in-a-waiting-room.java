class Solution {
    public int minimumChairs(String s) {
        int n=s.length();
        int mx=0,c=0;
        for(int i=0;i<n;i++){
            if(s.charAt(i)=='E'){
                c++;
            }
            else{
                c--;
            }
            mx=Math.max(mx,c);
        }   
        return mx;
    }
}