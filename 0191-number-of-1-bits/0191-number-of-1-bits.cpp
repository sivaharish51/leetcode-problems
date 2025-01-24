class Solution {
public:
    int hammingWeight(int n) {
        vector<int> v(32);
        int i=0,c=0;
        while(n>0){
            v[i]=n%2;
            if(n%2==1){
                c++;
            }
            n=n/2;
            i++;
        }
        return c;
    }
};