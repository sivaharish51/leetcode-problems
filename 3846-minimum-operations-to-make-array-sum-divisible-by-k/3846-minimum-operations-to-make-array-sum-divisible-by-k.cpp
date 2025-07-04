class Solution {
public:
    int minOperations(vector<int>& nums, int k) {
        int n=nums.size();
        int s=0;
        for(int i=0;i<n;i++){
            s+=nums[i];
        }
        if(s<k) return s;
        else return s%k;
    }
};