class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(s.begin(),s.end());
        sort(t.begin(),t.end());
        return s==t;
        // int n=s.size(),m=t.size();
        // if(n!=m){
        //     return false;
        // }    
        // else{
        //     for(int i=0;i<n;i++){
        //         if(s[i]==t[i]){
        //             continue;
        //         }
        //         else{
        //             return false;
        //             break;
        //         }
        //     }
        // }
        // return true;
    }
};