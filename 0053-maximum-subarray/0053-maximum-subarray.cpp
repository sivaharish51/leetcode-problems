class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int n=nums.size();
        int s=nums[0];
        int a=nums[0];
        for(int i=1;i<n;i++){
            if(s<0){
                s=0;
            }
            s+=nums[i];
            a=max(a,s);
        }
        return a;

    }
};