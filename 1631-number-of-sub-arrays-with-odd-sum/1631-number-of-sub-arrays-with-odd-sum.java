class Solution {
    public int numOfSubarrays(int[] a) {
        long n=a.length;
        long c=0;
        long s=0;
        for(int i=0;i<n;i++){
           s+=a[i];
           c+=s%2; 
        }
        c+=(n-c)*c;
        return (int)(c%1000000007);
    }
}