class Solution {
public:
    int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        int mx=0;
        // for(int i=0;i<n;i++){
        //     int num=nums[i];
        //     int c=1;
        //     for(int j=i+1;j<n;j++){
        //         if(nums[j]>num){
        //             c++;
        //             num=nums[j];
        //         }
        //     }
        //     mx=max(mx,c);
        // }
        // return mx;
        vector<int> v(n,1);
        for(int i=1;i<n;i++){
            for(int j=0;j<i;j++){
                if(nums[i]>nums[j]){
                    v[i]=max(v[i],v[j]+1);
                   
                }
            }
             
        }
        for(int i=0;i<v.size();i++){
            mx=max(mx,v[i]);
        }
        return mx;
    }
};