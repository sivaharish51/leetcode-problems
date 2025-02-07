class Solution {
    public int[] findThePrefixCommonArray(int[] A, int[] B) {
        int[] a=new int[A.length];
        int[] fre=new int[A.length+1];
        int c=0;  
        for(int i=0;i<A.length;i++){
            fre[A[i]]++;
            if(fre[A[i]]==2){
                c++;
            }
            fre[B[i]]++;
            if(fre[B[i]]==2){
                c++;
            }
            a[i]=c;
        }
        return a;
    }
}