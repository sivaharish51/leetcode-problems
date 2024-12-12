class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.begin(),citations.end());
        int hi=0;
        int n=citations.size();
        for(int i=0;i<n;i++){
            int h=n-i;
            if(citations[i]>=h){
                hi=h;
                break;
            }
        }    
        return hi;
    }
};