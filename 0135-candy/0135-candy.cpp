class Solution {
public:
    int candy(vector<int>& r) {
        int n=r.size();
        vector<int> l(n,1);
        vector<int> r1(n,1);
        for(int i=1;i<n;i++){
            if(r[i]>r[i-1]){
                l[i]=l[i-1]+1;
            }
        }
        for(int i=n-2;i>=0;i--){
            if(r[i]>r[i+1]){
                r1[i]=r1[i+1]+1;
            }
        }
        int t=0;
        for(int i=0;i<n;i++){
            t+=max(l[i],r1[i]);
        }
        return t;
    }
};