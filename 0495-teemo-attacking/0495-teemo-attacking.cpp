class Solution {
public:
    int findPoisonedDuration(vector<int>& ts, int dur) {
        int ans=0;
        int n=ts.size();
        for(int i=0;i<n-1;i++){
            if(ts[i]+dur>ts[i+1]){
                ans+=ts[i+1]-ts[i];
            }
            else{
                ans+=dur;
            }
        }
        return ans+dur;
    }
};