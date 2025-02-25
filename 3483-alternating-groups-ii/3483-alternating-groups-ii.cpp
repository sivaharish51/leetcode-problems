class Solution {
public:
    int numberOfAlternatingGroups(vector<int>& c, int k) {
        int n=c.size();
        for(int i=0;i<k-1;i++){
            c.push_back(c[i]);
        }
        int cnt=0;
        int l=c.size();
        int lt=0,r=1;
        while(r<l){
            if(c[r]==c[r-1]){
                lt=r;
                r++;
                continue;
            }
            r++;
            if(r-lt<k) continue;
            cnt++;
            lt++;
        }
        return cnt;
    }
};