class Solution {
public:
    vector<vector<int>> sortMatrix(vector<vector<int>>& grid) {
        int n=grid.size();
        for(int i=n-1;i>=0;i--){
            vector<int> v;
            int r=i,c=0;
            while(r<n && c<n){
                v.push_back(grid[r][c]);
                r++;c++;
            }
            sort(v.rbegin(),v.rend());
            r=i;
            c=0;
            int p=0;
            while(r<n && c<n){
                grid[r][c]=v[p];
                p++;
                r++;
                c++;
            }
        }
        for(int i=1;i<n;i++){
            vector<int> v;
            int r=0,c=i;
            while(r<n && c<n){
                v.push_back(grid[r][c]);
                r++;c++;
            }
            sort(v.begin(),v.end());
            r=0;
            c=i;
            int p=0;
            while(r<n && c<n){
                grid[r][c]=v[p];
                p++;
                r++;
                c++;
            }
        }
        return grid;
    }
};