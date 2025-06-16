class Solution {
public:
    int maximumDifference(vector<int>& nums) {
        int n=nums.size();
        int mx=-1;
        for(int i=0;i<n;i++){
            for(int j=i+1;j<n;j++){
                if(nums[i]<nums[j]){
                    int d=nums[j]-nums[i];
                    mx=max(mx,d);
                }
            }
        }
        return mx;
    }
};