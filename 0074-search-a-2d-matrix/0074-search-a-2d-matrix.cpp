class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int r=matrix.size();
        int c=matrix[0].size();
        int ind=-1;
        for(int i=0;i<r;i++){
            if(matrix[i][0]<=target && matrix[i][c-1]>=target){
                ind=i;
                break;
            }
        }
        if(ind!=-1){
        for(int j=0;j<c;j++){
            if(matrix[ind][j]==target){
                return true;
            }
         }
        }
        return false;
    }
};