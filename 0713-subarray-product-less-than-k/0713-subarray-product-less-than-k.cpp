class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        int n=nums.size();
        int c=0;
        for(int i=0;i<n;i++){
            int p=1;
            for(int j=i;j>=0;j--){
                p*=nums[j];
                if(p<k) c++;
                else break;
            }
        }
        return c;

    }
};