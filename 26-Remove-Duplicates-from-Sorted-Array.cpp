class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int r=1;
    for(int i=1;i<nums.size();i++){
        if(nums[i]!=nums[i-1]){
            nums[r]=nums[i];
            r++;
        }
    }  
    return r;   
    }
};