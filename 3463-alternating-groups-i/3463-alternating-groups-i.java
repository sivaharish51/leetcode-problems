class Solution {
    public int numberOfAlternatingGroups(int[] c) {
        int n=c.length;
        int cnt=0;
        for(int i=0;i<n-2;i++){
            if(c[i]==c[i+2] && c[i+1]!=c[i]){
                cnt++;
            }
        }    
        if(c[n-2]==c[0] && c[n-1]!=c[n-2]) cnt++;
        if(c[n-1]==c[1] && c[0]!=c[1]) cnt++;
        return cnt;  
    }
}