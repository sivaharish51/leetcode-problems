class Solution {
    public int numberOfChild(int n, int k) {
        n--;
        int r=k/n;
        int re=k%n;
        if(r%2==0) return re;
        else return (n-re);
    }
}