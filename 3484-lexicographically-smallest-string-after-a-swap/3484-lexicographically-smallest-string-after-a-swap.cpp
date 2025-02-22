class Solution {
public:
    string getSmallestString(string s) {
        int n=s.size();
        for(int i=1;i<n;i++){
            if(s[i]<s[i-1]){
                int a=s[i]-'0',b=s[i-1]-'0';
                if((a%2)==(b%2)){
                    swap(s[i],s[i-1]);
                    break;
                }
            }
        } 
        return s;
    }
};