class Solution {
public:
    int diagonalSum(vector<vector<int>>& mat) {
        int n=mat.size();
        int s=0;
        if(n%2==0){
            for(int i=0;i<n;i++){
                s+=mat[i][i]+mat[i][n-1-i];
            }
        }
        else{
            for(int i=0;i<n;i++){
                s+=mat[i][i]+mat[i][n-1-i];
            }
            s-=mat[n/2][n/2];
        }
        return s;
    }
};