class Solution {
public:
    bool judgeCircle(string moves) {
        int n=moves.size();
        int l=0,r=0,u=0,d=0;
        for(int i=0;i<n;i++){
            if(moves[i]=='U'){
                u++;
            }
            else if(moves[i]=='D'){
                u--;
            }
            else if(moves[i]=='L'){
                l++;
            }
            else{
                l--;
            }
        }
        if(u==0 && l==0) return true;
        return false;
    }
};