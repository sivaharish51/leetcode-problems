class Solution {
public:
    bool isPowerOfThree(int n) {
        if(n<=0) return false;
        for(int i=0;i<=n/2;i++){
            if(pow(3,i)==n){
                return true;
            }
            if(pow(3,i)>n) break;
        }
        return false;
    }
};