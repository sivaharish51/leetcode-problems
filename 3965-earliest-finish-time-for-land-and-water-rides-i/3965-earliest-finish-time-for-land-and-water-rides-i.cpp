class Solution {
public:
    int earliestFinishTime(vector<int>& a, vector<int>& b, vector<int>& c, vector<int>& d) {
        int n=a.size();
        int m=c.size();
        int ans=INT_MAX;
        int mn=INT_MAX;
        for(int i=0;i<n;i++){
            mn=min(mn,a[i]+b[i]);
        }
        for(int i=0;i<m;i++){
            ans=min(ans,d[i]+max(mn,c[i]));
        }
        mn=INT_MAX;
        for(int i=0;i<m;i++){
            mn=min(mn,c[i]+d[i]);
        }
        for(int i=0;i<n;i++){
            ans=min(ans,b[i]+max(mn,a[i]));
        }
        return ans;
    }
};