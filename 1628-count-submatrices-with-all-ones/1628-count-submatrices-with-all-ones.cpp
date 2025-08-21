class Solution {
public:
    int numSubmat(vector<vector<int>>& mat) {
        int m=mat.size();
        int n=mat[0].size();
        int res=0;
        vector<int> h(n,0);
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                if(mat[i][j]==0) h[j]=0;
                else h[j]+=1;
            }
            for(int j=0;j<n;j++){
                int mn=h[j];
                for(int k=j;k>=0 &&mn>0;k--){
                    mn=min(mn,h[k]);
                    res+=mn;
                }
            }
        }
        return res;
    }
};