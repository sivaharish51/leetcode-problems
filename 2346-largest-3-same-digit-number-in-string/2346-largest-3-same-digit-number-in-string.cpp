class Solution {
public:
    string largestGoodInteger(string num) {
        int n=num.size();
        int c=1;
        char mx=0;
        for(int i=0;i<n-2;i++){
            if(num[i]==num[i+1] && num[i+1]==num[i+2]){
                mx=max(mx,num[i]);
            }
        }
        if(mx>0) return string(3,mx);
        return "";
    }
};