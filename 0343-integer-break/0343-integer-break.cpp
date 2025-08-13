class Solution {
public:
    int integerBreak(int n) {
        if(n<=3) return n-1;
        int p=1;
        while(n>4){
            p=p*3;
            n=n-3;
        }
        return p*n;
    }
};