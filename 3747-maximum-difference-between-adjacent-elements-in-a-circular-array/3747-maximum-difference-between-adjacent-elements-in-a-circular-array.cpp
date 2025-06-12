class Solution {
public:
    int maxAdjacentDistance(vector<int>& nums) {
        int n=nums.size();
        int mx=0;
        for(int i=0;i<n-1;i++){
            int d=abs(nums[i]-nums[i+1]);
            mx=max(mx,d);
        }
        int d=abs(nums[n-1]-nums[0]);
        mx=max(mx,d);
        return mx;
    }
};