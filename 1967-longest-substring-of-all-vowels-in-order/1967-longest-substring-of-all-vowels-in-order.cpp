class Solution {
public:
    int longestBeautifulSubstring(string w) {
        int n=w.size();
        int ans=0,i=0;
        while(i<n){
            if(w[i]!='a'){
                i++;
            }
            int j=i;
            int c=1;
            while(j+1<n && w[j]<=w[j+1]){
                if(w[j]<w[j+1]) c++;
                j++;
            }
            if(c==5){
                ans=max(ans,j-i+1);
            }
            i=j+1;
        }
        return ans;
    }
};