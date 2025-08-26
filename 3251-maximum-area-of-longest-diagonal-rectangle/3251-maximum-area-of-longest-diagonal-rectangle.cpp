class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int  n=d.size();
        int mx=0;
        int mxd=0;
        int ind=0;
        for(int i=0;i<n;i++){
            int pro=(d[i][0]*d[i][0])+(d[i][1]*d[i][1]);
            int cmx=d[i][0]*d[i][1];
            if((pro>mxd)||((pro==mxd)&&(cmx>mx))){
                mxd=pro;
                mx=cmx;
            }
        }
        return mx;
    }
};