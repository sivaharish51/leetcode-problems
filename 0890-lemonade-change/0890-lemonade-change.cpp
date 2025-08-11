class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int n=bills.size();
        if(bills[0]!=5) return false;
        int f=0,t=0;
        for(int i=0;i<n;i++){
            if(bills[i]==5){
                f++;
            }
            else if(bills[i]==10){
                if(f>0){
                    t++;
                    f--;
                }
                else{
                    return false;
                }
            }
            else{
                if(f>0 && t>0){
                    f--;
                    t--;
                }
                else if(f>2){
                    f=f-3;
                }
                else{
                    return false;
                }
            }
        }
        return true;

    }
};