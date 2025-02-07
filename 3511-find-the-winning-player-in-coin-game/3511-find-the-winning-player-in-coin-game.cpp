class Solution {
public:
    string winningPlayer(int x, int y) {
        int c=0;
        while(x>0 && y>3){
            c++;
            x=x-1;
            y=y-4;
        } 
        string s="";
        if(c%2==1){
            s="Alice";
        } 
        else{
            s="Bob";
        }
        return s;
    }
};