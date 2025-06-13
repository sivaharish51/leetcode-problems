class Solution {
public:
    int maxCoins(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>> dp(n+2,vector<int>(n+1,0));
        nums.insert(nums.begin(),1);
        nums.push_back(1);
        for(int i=n;i>=1;i--){
            for(int j=1;j<=n;j++){
                if(i>j) continue;
                int mx=INT_MIN;
                for(int k=i;k<=j;k++){
                    int c=(nums[i-1]*nums[k]*nums[j+1])+dp[i][k-1]+dp[k+1][j];
                    mx=max(mx,c);
                }
                dp[i][j]=mx;
            }
        }
        return dp[1][n];
    }
};