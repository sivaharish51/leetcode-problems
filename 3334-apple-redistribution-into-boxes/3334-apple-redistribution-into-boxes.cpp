class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& cap) {
        int n=apple.size();
        int m=cap.size();
        sort(cap.begin(),cap.end());
        int s=0;
        for(int i=0;i<n;i++){
            s+=apple[i];
        }
        int c=0;
        for(int i=m-1;i>=0;i--){
                s-=cap[i];
                c++;
            if(s<=0){
                break;
            }
        }
        return c;
    }
};