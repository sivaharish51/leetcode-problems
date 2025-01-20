class Solution {
public:
    int maximumGap(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        int a=0; 
        if(n==1){
            return 0;
        }
        for(int i=1;i<n;i++){
            a=max(a,nums[i]-nums[i-1]);
        }
        return a;
    }
};