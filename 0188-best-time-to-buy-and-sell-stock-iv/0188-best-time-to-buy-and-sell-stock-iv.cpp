class Solution {
public:
    int maxProfit(int k, vector<int>& p) {
        int n=p.size();
        vector<vector<int>> dp(k+1,vector<int>(n));
        
        for(int i=0;i<n;i++){
            dp[0][i]=0;
        }
        for(int i=0;i<=k;i++){
            dp[i][0]=0;
        }
        for(int j=1;j<=k;j++){
            int mx=-p[0];
            for(int i=1;i<n;i++){
                dp[j][i]=max(dp[j][i-1],p[i]+mx);
                mx=max(mx,dp[j-1][i]-p[i]);
            }
        }
        return dp[k][n-1];
    }
};