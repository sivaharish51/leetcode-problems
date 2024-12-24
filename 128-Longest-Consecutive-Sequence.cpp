class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int n=nums.size();
        if(n<1) return n;
        sort(nums.begin(),nums.end());
        int l=1,c=1;
        for(int i=1;i<n;i++){
            if(nums[i]==nums[i-1]){
                continue;
            }
            if(nums[i]==nums[i-1]+1){
                c++;
                l=max(l,c);
            }
            else{
                c=1;
            }
        } 
        return l;  
    }
};