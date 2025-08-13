class Solution {
public:
    int characterReplacement(string s, int k) {
        unordered_map<char,int> mp;
        int r=0,j=0,mx=0;
        for(int i=0;i<s.size();i++){
            mp[s[i]]++;
            mx=max(mx,mp[s[i]]);
            while((i-j+1)-mx>k){
                mp[s[j]]--;
                j++;
            }
            r=max(r,i-j+1);
        }
        return r;
    }
};