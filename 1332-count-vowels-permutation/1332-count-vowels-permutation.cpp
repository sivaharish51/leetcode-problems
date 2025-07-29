class Solution {
public:
    int countVowelPermutation(int n) {
        long a=1,e=1,i=1,o=1,u=1,m=pow(10,9)+7;
         long a1,e1,i1,o1,u1;
        for(int j=2;j<=n;j++){
           
            a1=(e+i+u)%m;
            e1=(a+i)%m;
            i1=(e+o)%m;
            o1=(i)%m;
            u1=(i+o)%m;
            a=a1,e=e1,i=i1,o=o1,u=u1;
        }
        return (a+e+i+o+u)%m;
    }
};