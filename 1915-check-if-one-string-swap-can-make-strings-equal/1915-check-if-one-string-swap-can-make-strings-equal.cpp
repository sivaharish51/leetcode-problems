class Solution {
public:
    bool areAlmostEqual(string s1, string s2) {
       int n=s1.size();
       int m=s2.size();
       int c=-1;
       if(n!=m){
        return false;
       } 
       else{
            for(int i=0;i<n;i++){
                if(s1[i]!=s2[i]){
                    if(c==-1){
                        c=i;
                    }
                    else{
                        swap(s1[i],s1[c]);
                        return s1==s2;
                    }
                }
            }
       }
       return s1==s2;
    }
};