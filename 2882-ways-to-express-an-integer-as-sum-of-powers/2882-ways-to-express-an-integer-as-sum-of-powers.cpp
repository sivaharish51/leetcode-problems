class Solution {
public:
    int numberOfWays(int n, int x) {
        vector<int> po;
        for(int i=1; ;i++){
            if(pow(i,x)<=n){
                po.push_back(pow(i,x));
            }
            else break;
        }
        vector<long long> dp(n+1,0);
        dp[0]=1;
        for(int i=0;i<po.size();i++){
            for(int j=n;j>=po[i];j--){
                dp[j]=(dp[j]+dp[j-po[i]])%1000000007;
            }
        }
        return (int) dp[n];
    }
};