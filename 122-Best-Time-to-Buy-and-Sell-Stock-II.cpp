class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bp=prices[0]; 
        int p=0;
        for(int i=1;i<prices.size();i++){
            if(prices[i]>prices[i-1]){
                p=p+prices[i]-prices[i-1];
            }
        }
        return p;
    }
};