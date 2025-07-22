class Solution {
public:
    int maximumUniqueSubarray(vector<int>& nums) {
        int n=nums.size();
        unordered_set<int> s;
        int l=0,cs=0,mx=0;
        for(int r=0;r<n;r++){
            while(s.count(nums[r])){
                cs-=nums[l];
                s.erase(nums[l]);
                l++;
            }
            cs+=nums[r];
            s.insert(nums[r]);
            mx=max(mx,cs);
        }
        return mx;
    }
};