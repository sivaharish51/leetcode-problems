class Solution {
public:
    double gain(int pass,int total){
        return (double)(pass+1)/(total +1) - (double)pass/total;
    }
    double maxAverageRatio(vector<vector<int>>& classes, int extraStudents) {
        int n = classes.size();
        priority_queue<pair<double,pair<int,int>>>pq;
        for(auto c:classes){
            pq.push({gain(c[0],c[1]),{c[0],c[1]}});
        }
        while(extraStudents--){
            auto[g,c] = pq.top();
           // cout<<g<<c.first<<c.second<<endl;
            pq.pop();
            pq.push({gain(c.first+1,c.second+1),{c.first+1,c.second+1}});
        }
        double ans = 0;
        while(!pq.empty()){
            auto[p,c] = pq.top();
            pq.pop();
            ans += (double) c.first / c.second;
        }
        ans = (double) ans / n;
        return ans;
    }
};