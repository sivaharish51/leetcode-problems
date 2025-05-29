class Solution {
public:
    vector<int> getRow(int n) {
        vector<int> a(1);
        for(int i=0;i<=n;i++){
            vector<int> a1;
            for(int j=0;j<=i;j++){
                if(j==0 || j==i) a1.push_back(1);
                else{
                    a1.push_back(a[j-1]+a[j]);
                }
            }
            a=(a1);
        }
        return a;
    }
};
