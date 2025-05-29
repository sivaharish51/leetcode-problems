class Solution {
public:
    vector<vector<int>> generate(int n) {
        vector<vector<int>> a;
        for(int i=0;i<n;i++){
            vector<int> a1(i+1,1);
            for(int j=1;j<i;j++){
                //if(j==0 || j==i) a1[j]=1;
                //else{
                    a1[j]=a[i-1][j-1]+a[i-1][j];
                //}
            }
            a.push_back(a1);
        }
        return a;
    }
};