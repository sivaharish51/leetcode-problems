class Solution {
    public long minCost(int[] arr, int[] brr, long k) {
        long n=arr.length;
        long s=0;
        for(int i=0;i<n;i++){
            s+=Math.abs(arr[i]-brr[i]);
        }  
        Arrays.sort(arr);
        Arrays.sort(brr);
        long s1=k;
        for(int i=0;i<n;i++){
            s1+=Math.abs(arr[i]-brr[i]);
        }  
        return Math.min(s,s1);
    }
}