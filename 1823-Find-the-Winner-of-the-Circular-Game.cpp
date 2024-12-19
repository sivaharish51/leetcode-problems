class Solution {
public:
    int findTheWinner(int n, int k) {
        if(n==1) return 1;
        int a=findTheWinner(n-1,k);
        return (a+(k-1))%n+1;
    }
};