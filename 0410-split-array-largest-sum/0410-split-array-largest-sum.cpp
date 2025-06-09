class Solution {
public:
    int splitArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int> pre(n+1);
        for(int i=0;i<n;i++){
            pre[i+1]=pre[i]+nums[i];
        }
        if(k==1) return pre[n];
        vector<vector<int>>dp(k+1,vector<int>(n+1));
        for(int i=1;i<=n;i++){
            dp[1][i]=pre[i];
        }
        for(int i=1;i<=k;i++){
            dp[i][1]=nums[0];
        }
        for(int i=2;i<=k;i++){
            for(int j=2;j<=n;j++){
                int best=INT_MAX;
                for(int p=1;p<j;p++){
                    int left=dp[i-1][p];
                    int right=pre[j]-pre[p];
                    int c=max(left,right);
                    best=min(best,c);
                }
                dp[i][j]=best;
            }
        }
        return dp[k][n];
    }
};