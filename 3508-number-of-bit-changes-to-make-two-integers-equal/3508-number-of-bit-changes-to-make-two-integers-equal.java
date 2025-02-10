class Solution {
    public int minChanges(int n, int k) {
         if ((n & k) != k) return -1;
        String n1=String.format("%32s",Integer.toBinaryString(n)).replace(' ','0');
        String k1=String.format("%32s",Integer.toBinaryString(k)).replace(' ','0'); 
        int c=0;
        for(char ch:n1.toCharArray()){
            c+=(ch-'0');
        }
        for(char ch:k1.toCharArray()){
            c-=(ch-'0');
        }
        return c;
    }
}