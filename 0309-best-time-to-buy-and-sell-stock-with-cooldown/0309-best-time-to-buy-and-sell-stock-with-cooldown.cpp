class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int s=0,h=INT_MIN,c=0;
        for(int st:prices){
            int ps=s,ph=h,pc=c;
            c=max(pc,s);
            s=h+st;
            h=max(h,pc-st);
        }
        return max(c,s);
    }
};