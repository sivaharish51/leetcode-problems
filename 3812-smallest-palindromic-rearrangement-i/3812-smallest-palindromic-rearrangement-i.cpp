class Solution {
public:
    string smallestPalindrome(string s) {
        int n=s.size();
        if(n==1) return s;
        string s1="";
        for(int i=0;i<n/2;i++){
            s1+=s[i];
        }
        sort(s1.begin(),s1.end());
        string s2=s1;
        sort(s1.rbegin(),s1.rend());
        if(n%2==0){
            return s2+s1;
        }
        else{
            return s2+s[n/2]+s1;
        }
    }
};