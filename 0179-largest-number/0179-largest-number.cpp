class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> v;
        for(int n:nums){
            v.push_back(to_string(n));
        }
        sort(v.begin(),v.end(),[](const string &a,const string &b){
            return (b+a)<(a+b);
        });
        if(v[0]=="0") return "0";
        string a="";
        for(string n:v){
            a+=n;
        }
        return a;
    }
};