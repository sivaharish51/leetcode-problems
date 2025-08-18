class Solution {
public:
    int arrangeCoins(int n) {
        int l=1;
        int r=n;
        while(l<=r){
            long double mid=l+(r-l)/2;
            long double v=(mid*(mid+1))/2;
            if(v>n){
                r=mid-1;
            }
            else{
                l=mid+1;
            }
        }
        return r;
    }
};