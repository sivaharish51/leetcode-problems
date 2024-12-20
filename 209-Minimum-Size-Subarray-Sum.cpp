class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int n=nums.size();
        int l=0,r=0; 
        int mini=INT_MAX;
        int s=0;
        while(r<n){
            s=s+nums[r];
            while(s>=target){
                mini=min(mini,r-l+1);
                s=s-nums[l];
                l++;
            }
            r++;
        }
        if(mini==INT_MAX){
            return 0;
        }
        else{
            return mini;
        }
    }
};