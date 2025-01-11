class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int> m;
        for(int i:nums){
            m[i]++;
        } 
        vector<vector<int>> f(nums.size()+1);
        for(auto &i:m){
            f[i.second].push_back(i.first);
        }
        vector<int> r;
        for(int i=f.size()-1;i>=0;i--){
            if(r.size()!=k){
                for(int num:f[i]){
                    r.push_back(num);
                }
            }
        }
        return r;
    }
};