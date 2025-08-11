class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int n=nums.size();
        // int s=0;
        // for(int i=0;i<n;i++){
        //     s+=nums[i];
        // }
        // int val=s/n;
        sort(nums.begin(),nums.end());
        int ans=0;
        for(int i=0;i<n/2;i++){
            ans=ans+(nums[n-i-1]-nums[i]);
        }
        return ans;
    }
};