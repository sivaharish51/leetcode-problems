class Solution {
public:
    int longestValidParentheses(string s) {
        stack<int> s1;
        int n=s.size();
        s1.push(-1);
        int c=0;
        //int md=0;
        for(int i=0;i<n;i++){
            if(s[i]=='('){
                s1.push(i);
            }
            else{
                s1.pop();
                if(s1.empty()){
                    s1.push(i);
                }
                else{
                    c=max(c,i-s1.top());
                }
            }
        }
        return c;

    }
};