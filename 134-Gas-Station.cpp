class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        int sg=0,sc=0;
        int res=0;
        int t=0;
        for(int i=0;i<gas.size();i++){
            sg+=gas[i];
            sc+=cost[i];
        } 
        if(sc>sg){
            return -1;
        }
        
        else{
            for(int i=0;i<gas.size();i++){
                t+=(gas[i]-cost[i]);
                if(t<0){
                    t=0;
                    res=i+1;
                }
            }
        }
        return res;
    }
};