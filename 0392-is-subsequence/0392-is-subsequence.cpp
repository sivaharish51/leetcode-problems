class Solution {
public:
    bool isSubsequence(string s, string t) {
       //sort(s.begin(),s.end()); 
       //sort(t.begin(),t.end());
       int j=0;
       for(int i=0;i<t.size();i++){
            if(s[j]==t[i]){
                j++;
            }
       } 
       if(j==s.size()) return true;
       return false;
       
    }
};