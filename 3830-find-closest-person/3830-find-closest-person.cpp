class Solution {
public:
    int findClosest(int x, int y, int z) {
        int a=abs(z-x);
        int b=abs(z-y);
        if(a<b) return 1;
        else if(a==b) return 0;
        return 2;
    }
};