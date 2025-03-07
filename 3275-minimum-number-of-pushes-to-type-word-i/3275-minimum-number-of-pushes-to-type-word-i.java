class Solution {
    public int minimumPushes(String word) {
        int n=word.length()/8;
        int m=word.length()%8;
        int r=1,p=0;
        while(n>0){
            p+=8*r;
            r++;
            n--;
        }
        p+=m*r;
        return p;
    }
}