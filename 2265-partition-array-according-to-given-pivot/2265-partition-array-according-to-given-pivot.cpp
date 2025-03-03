class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int p) {
        int n=nums.size();
        vector<int> s;
        //vector<int> v;
        int c=0;
        for(int i=0;i<n;i++){
            if(nums[i]<p){
                s.push_back(nums[i]);
            }
            else if(p==nums[i]){
                c++;
            }
        } 
        for(int i=0;i<c;i++){
            s.push_back(p);
        }
        for(int i=0;i<n;i++){
            if(nums[i]>p){
                s.push_back(nums[i]);
            }
        }
        return s;
    }
};