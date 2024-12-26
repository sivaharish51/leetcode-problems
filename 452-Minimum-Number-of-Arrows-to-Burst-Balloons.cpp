class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        sort(points.begin(), points.end(), [](const vector<int>& a, const vector<int>& b) {
            return a[1] < b[1];
        });
        int a=1;
        int pe=points[0][1];
        for(int i=0;i<points.size();i++){
            if(points[i][0]>pe){
                a++;
                pe=points[i][1];
            }
        } 
        return a;
    }
};