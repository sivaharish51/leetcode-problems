class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        int n=nums.size();
        vector<int> v(n+1,0);
        vector<int> v1;
        for(int i=0;i<n;i++){
            v[nums[i]]++;
        }  
        for(int i=1;i<n+1;i++){
            if(v[i]==0){
                v1.push_back(i);
            }
        }
        return v1;
    }
};