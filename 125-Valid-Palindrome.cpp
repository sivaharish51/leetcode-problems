class Solution {
public:
    bool isPalindrome(string s) {
        string sn="";
        int n=s.size();
        for(int i=0;i<n;i++){
            sn+=tolower(s[i]);
        }  
        string s1="";
        for(int i=0;i<sn.size();i++){
            if(sn[i]>='a'&&sn[i]<='z'||sn[i]>='0'&&sn[i]<='9'){
                s1+=sn[i];
            }
        }
        string s2="";
        for(int i=s1.size()-1;i>=0;i--){
            s2+=s1[i];
        }
        return s1==s2;
    }
};