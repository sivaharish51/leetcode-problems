class Solution {
    public boolean doesAliceWin(String s) {
        int n=s.length();
        int c=0;
        for(int i=0;i<n;i++){
            if(s.charAt(i)=='a' || s.charAt(i)=='e' ||s.charAt(i)=='i' ||s.charAt(i)=='o' ||s.charAt(i)=='u'){
                c++;
            }
        }
        if(c==0) return false;
        if(c%2==1) return true;
        if(c%2==0) return true;
        return false;
    }
}