class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int a=0;
        vector<int> c(128);
        for(int l=0,r=0;r<s.size();r++){
            ++c[s[r]];
            while(c[s[r]]>1){
                c[s[l]]--;
                l++;
            }
            a=max(a,r-l+1);
        } 
        return a;
    }
};