class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        //vector<int> v(n);
        unordered_map<int,int> mp;
        for(int i=0;i<n;i++){
            mp[arr[i]]++;
        }
        int l=-1;
        for(auto i:mp){
            if(i.first==i.second){
                if(i.first>l){
                    l=i.first;
                }
            }
        }
        return l;
    }
};