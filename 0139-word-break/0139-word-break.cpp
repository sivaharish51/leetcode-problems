class Solution {
public:
    bool wordBreak(string s, vector<string>& wordDict) {
        vector<bool> dp(s.size()+1,0);
        dp[0]=true;
        unordered_set<string> se(wordDict.begin(),wordDict.end());
        for(int i=1;i<=s.size()+1;i++){
            for(int j=0;j<i;j++){
                if(dp[j] && se.count(s.substr(j,i-j))){
                    dp[i]=true;
                    break;
                }
            }
        }
        return dp[s.size()];
    }
};