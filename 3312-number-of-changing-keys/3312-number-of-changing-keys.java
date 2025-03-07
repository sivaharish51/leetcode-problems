class Solution {
    public int countKeyChanges(String s) {
        int n=s.length();
        s=s.toLowerCase();
        int c=0;
        for(int i=0;i<n-1;i++){
            //char ch1=s.charAt(i);
            //char ch2=s.charAt(i+1);
            if(s.charAt(i)!=s.charAt(i+1)){
                c++;
            }
        }
        return c;
    }
}