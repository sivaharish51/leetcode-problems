class Solution {
public:
    int maxDifference(string s) {
        int n=s.size();
        sort(s.begin(),s.end());
        int e=100,o=1,c=1;
        for(int i=1;i<n;i++){
            if(s[i]==s[i-1]){
                c++;
            }
            else{
                if(c%2==0){
                    if(c<e) e=c;
                }
                else{
                    if(c>o) o=c;
                }
                c=1;
            }
        }
        if(c%2==0){
                    if(c<e) e=c;
                }
                else{
                    if(c>o) o=c;
                }
        return o-e;
    }
};