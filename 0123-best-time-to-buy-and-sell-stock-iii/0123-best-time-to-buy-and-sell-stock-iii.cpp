class Solution {
public:
    int maxProfit(vector<int>& p) {
        // int b1=INT_MAX;
        // int p1=INT_MIN;
        // int b2=INT_MAX;
        // int p2=INT_MIN;
        // for(int i=0;i<prices.size();i++){
        //     b1=min(b1,prices[i]);
        //     p1=max(p1,prices[i]-b1);
        //     b2=min(b2,prices[i]-p1);
        //     p2=max(p2,prices[i]-b2);
        // }
        // return p2;
        int n=p.size();
        vector<vector<int>> dp(3,vector<int>(n));
        
        for(int i=0;i<n;i++){
            dp[0][i]=0;
        }
        for(int i=0;i<=2;i++){
            dp[i][0]=0;
        }
        for(int k=1;k<=2;k++){
            int mx=-p[0];
            for(int i=1;i<n;i++){
                dp[k][i]=max(dp[k][i-1],p[i]+mx);
                mx=max(mx,dp[k-1][i]-p[i]);
            }
        }
        return dp[2][n-1];
    }
};