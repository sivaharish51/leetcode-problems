class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();  
        vector<int> dp(n);
        int a=nums[0];
        dp[0]=nums[0];
        if(n==1){
            return nums[0];
        }
        for(int i=1;i<n;i++){
            dp[i]=max(dp[i-1]+nums[i],nums[i]);
            a=max(a,dp[i]);
        }
        return a;
    }
};