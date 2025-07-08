class Solution {
public:
    long long minCuttingCost(int n, int m, int k) {
        long long a=0;
        if(n<=k &&m<=k) return 0;
        if(n>k && m<=k){
            a+=(long long)(n-k)*k;
        }
        if(m>k && n<=k){
            a+=(long long)(m-k)*k;
        }
        return a;
    }
};