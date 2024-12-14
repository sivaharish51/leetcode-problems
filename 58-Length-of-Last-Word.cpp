class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=s.size()-1;
        while(n>=0&&s[n]==' '){
            n-=1;
        }
        int c=0;
        for(int i=n;i>=0;i--){
            if(s[i]!=' '){
                c++;
            }
            else if(s[i]==' '){
                break;
            }
        }
        return c;

    }
};