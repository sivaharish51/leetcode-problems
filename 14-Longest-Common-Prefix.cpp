class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        sort(strs.begin(),strs.end());
        int n=strs.size();
        string f=strs[0],e=strs[n-1];
        for(int i=0;i<min(f.size(),e.size());i++){
            if(f[i]!=e[i]){
                return s;
            }
            s+=f[i];
        }  
        return s;
    }
};