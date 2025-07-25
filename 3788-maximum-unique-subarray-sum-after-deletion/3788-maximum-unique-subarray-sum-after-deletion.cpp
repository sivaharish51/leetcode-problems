class Solution {
public:
    int maxSum(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int> mp;
        sort(nums.begin(),nums.end());
        if(nums[n-1]<0) return nums[n-1];
        for(int i=0;i<n;i++){
            mp[nums[i]]++;
        } 
        int s=0;
        for(auto i:mp){
            if(i.first>0){
                s+=i.first;
            }
        }
        return s;
    }
};