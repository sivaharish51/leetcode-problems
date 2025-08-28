class Solution {
public:
    int romanToInt(string s) {
        int s1=0;
        unordered_map<char,int> mp;
        mp['I']=1;
        mp['V']=5;
        mp['X']=10;
        mp['L']=50;
        mp['C']=100;
        mp['D']=500;
        mp['M']=1000;
        int n=s.size()-1;
        s1+=mp[s[n]];
        for(int i=n-1;i>=0;i--){
            if(mp[s[i]]<mp[s[i+1]]){
                s1-=mp[s[i]];
            }
            else{
                s1+=mp[s[i]];
            }
            // if(s[i]=='I'){
            //     s1+=1;
            // }
            // else if(s[i]=='V') s1+=5;
            // else if(s[i]=='X') s1+=10;
            // else if(s[i]=='L') s1+=50;
            // else if(s[i]=='C') s1+=100;
            // else if(s[i]=='D') s1+=500;
            // else s1+=1000;
        }
        return s1;
    }
};