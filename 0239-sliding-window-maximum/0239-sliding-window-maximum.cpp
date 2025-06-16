class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {
         int n=nums.size();
        // int mx=0;
        // vector<int> v;
        // for(int i=0;i<k;i++){
        //     mx=max(mx,nums[i]);
        // }
        // if(k==1) return nums;
        // v.push_back(mx);
        // int l=0;
        // for(int i=k;i<n;i++){
        //     if(nums[i]>mx ){
        //          mx=nums[i];
        //         v.push_back(mx);
               
        //         //l++;
        //     }
        //     else{
        //         v.push_back(mx);
        //         //l++;
        //     }
        // }
        // return v;
        vector<int> v;
        deque<int> d;
        for(int i=0;i<n;i++){
            int num=nums[i];
            while(!d.empty() && d.back()<num){
                d.pop_back();
            }
            d.push_back(num);
            if(i>=k && nums[i-k]==d.front()){
                d.pop_front();
            }
            if(i>=k-1){
                v.push_back(d.front());
            }
        }
        return v;
    }
};