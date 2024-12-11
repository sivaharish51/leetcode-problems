class Solution {
public:
    bool canJump(vector<int>& nums) {
        int n=nums.size();
        int f=0;
        for(int i=0;i<n;i++){
            f=max(f,nums[i]+i);
            if(f>=n-1){
                break;
            }
            if(i==f){
                return false;
            }
        }   
        return true;
    }
};