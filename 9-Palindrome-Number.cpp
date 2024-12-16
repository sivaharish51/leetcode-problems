class Solution {
public:
    bool isPalindrome(int x) {
        if(x<0){
            return false;
        }  
        long long s=0; 
        int r;
        long long n=x;
        while(n>0){
            r=n%10;
            s=s*10+r;
            n=n/10;
        }
        return x==s;
    }
};