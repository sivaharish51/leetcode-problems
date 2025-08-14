class Solution {
public:
    string largestOddNumber(string num) {
        int n=num.size();
        string s=num;
        //long long val=stoll(num);
        for(int i=n-1;i>=0;i--){
            if((num[i]-'0')%2==1){
                break;
            }
            else{
                s.pop_back();
            }
        } 
        if(!s.empty()) return s;
        return "";
    }
};