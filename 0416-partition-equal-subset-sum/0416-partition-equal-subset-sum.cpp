class Solution {
    vector<vector<int>> dp;
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size(), sum = 0;
        for (int x : nums)
            sum += x;

        if (sum % 2)
            return false;
        int target = sum / 2;

        // Tabulation TC: O(n*sum+1) SC:O(n*sum+1)
        dp.resize(n, vector<int>(target + 1, 0));
        for (int i = 0; i < n; i++)
            dp[i][0] = 1;
        if (nums[0] <= target)
            dp[0][nums[0]] = 1;

        for (int i = 1; i < n; i++) {
            for (int j = 1; j <= target; j++) {
                if (j >= nums[i])
                    dp[i][j] = dp[i - 1][j] || dp[i - 1][j - nums[i]];
                else
                    dp[i][j] = dp[i - 1][j];
            }
        }
        return dp[n - 1][target];
    }
};