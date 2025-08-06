class Solution {
public:
    int findLHS(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        sort(nums.begin(),nums.end());
        int l=0,r=1;
        while(l<n&&r<n){
            if(nums[r]-nums[l]==1){
                
                ans=max(ans,r-l+1);
                r++;
            }
            else if(nums[r]-nums[l]==0){
                r++;
            }
            else{
                l++;
            }
        }
        return ans;
    }
};