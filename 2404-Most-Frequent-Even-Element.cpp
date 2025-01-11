class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int,int> m;
        for(int i:nums){
            if(i%2==0){
                m[i]++;
            }
        } 
        int a=0,b=-1;
        for(auto i:m){
            if(i.second>a||(i.second==a && i.first<b)){
                a=i.second;
                b=i.first;
            }
        }
        return b;
    }
};