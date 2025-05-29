class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> a;
        for(int i=0;i<n;i++){
            vector<int> a1;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) a1.push_back(1);
                else{
                    a1.push_back(a[i-1][j-1]+a[i-1][j]);
                }
            }
            a.push_back(a1);
        }
        return a;
    }
};