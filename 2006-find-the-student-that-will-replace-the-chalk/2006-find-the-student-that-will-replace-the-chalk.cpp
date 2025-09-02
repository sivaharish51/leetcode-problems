class Solution {
public:
    int chalkReplacer(vector<int>& c, int k) {
        int n=c.size();
        long long s=0;
        for(int i=0;i<n;i++){
            s+=c[i];
        }
        int c1=k%s;
        int i;
        for(i=0;i<n;i++){
            if(c[i]>c1){
                break;
            }
            c1=c1-c[i];
        }
        return i;
    }
};