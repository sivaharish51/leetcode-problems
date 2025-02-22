class Solution {
public:
    long long minimumCost(int m, int n, vector<int>& h, vector<int>& v) {
        sort(h.begin(),h.end(),greater<int>());
        sort(v.begin(),v.end(),greater<int>());
        long long i=0,j=0,s=0,cv=1,ch=1;
        while(i<m-1 &&j<n-1){
            if(h[i]>v[j]){
                s+=h[i]*cv;
                ch++;
                i++;
            }
            else{
                s+=v[j]*ch;
                cv++;
                j++;
            }
        }
        while(i<m-1){
            s+=h[i]*cv;
            i++;
        }
        while(j<n-1){
            s+=v[j]*ch;
            j++;
        }
        return s;  
    }
};