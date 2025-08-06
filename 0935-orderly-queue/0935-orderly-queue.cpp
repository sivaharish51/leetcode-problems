class Solution {
public:
    string orderlyQueue(string s, int k) {
        if(k>1){
            sort(s.begin(),s.end());
            return s;
        }
        
            string t=s;
            s=s+s; 
            for(int i=1;i<t.size();i++){
                t=min(t,s.substr(i,t.size()));
            } 

        return t;
    }
};