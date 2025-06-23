class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int s=nums[0];
        int a=nums[0];
        for(int i=1;i<n;i++){
            s=max(nums[i],s+nums[i]);
            a=max(a,s);
        }
        return a;

    }
};