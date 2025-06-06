class Solution {
public:
    int matrixSum(vector<vector<int>>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            sort(nums[i].begin(),nums[i].end());
        }
        int s=0;
        for(int i=0;i<nums[0].size();i++){
            int mx=0;
            for(int j=0;j<n;j++){
                mx=max(mx,nums[j][i]);
            }
            s=s+mx;
        }
        return s;
    }
};