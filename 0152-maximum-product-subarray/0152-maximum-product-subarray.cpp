class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int n=nums.size();
        int pre=1,po=1;
        int a=INT_MIN;
        for(int i=0;i<n;i++){
            if(pre==0) pre=1;
            if(po==0) po=1;
            pre=pre*nums[i];
            po=po*nums[n-1-i];
            a=max({a,pre,po});
        }
        return a;
    }
};