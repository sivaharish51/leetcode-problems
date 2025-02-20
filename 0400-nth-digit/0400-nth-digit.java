class Solution {
    public int findNthDigit(int n) {
        int l=1,st=1;
        long c=9;
        while(n>l*c){
            n-=(l*c);
            l++;
            st*=10;
            c*=10;
        }
        st+=((n-1)/l);
        String s = Integer.toString(st);
        int in=s.charAt((n-1)%l);
        return in-'0';
    }
}