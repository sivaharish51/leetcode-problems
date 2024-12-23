class Solution {
public:
    bool isIsomorphic(string s, string t) {
        int n=s.size();
        vector<int> s1(128,0);
        vector<int> t1(128,0);
        for(int i=0;i<n;i++){
            if(s1[s[i]]!=t1[t[i]]){
                return false;
            }
            s1[s[i]]=i+1;
            t1[t[i]]=i+1;
        } 
        return true; 
    }
};