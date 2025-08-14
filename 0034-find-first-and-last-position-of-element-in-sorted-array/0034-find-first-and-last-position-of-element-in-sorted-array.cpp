class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int n=nums.size();
        vector<int> v(2,-1);
        for(int i=0;i<n;i++){
            if(nums[i]==target) {
                if(v[0]==-1){
                    v[0]=i;
                    //v[1]=i;
                } 
                else{
                    v[1]=i;
                }
            }
        }
        return v;
    }
};