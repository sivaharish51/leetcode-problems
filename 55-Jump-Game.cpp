class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size()-1;
        int d=0;
        for(int i=n-1;i>=0;i--){
            d=i+nums[i];
            if(d>=n){
                n=i;
            }
        }   
        return n==0; 
    }
};