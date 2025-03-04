class Solution {
    public int maxVowels(String s, int k) {
        int n=s.length();
        int c=0;
        for(int i=0;i<k;i++){
            if(s.charAt(i)=='a' ||s.charAt(i)=='e' ||s.charAt(i)=='i' ||s.charAt(i)=='o' ||s.charAt(i)=='u'){
                c++;
            }
        }  
        int mx=c;
        for(int i=k;i<n;i++){
            //int j=Math.abs(i-k);
            if(s.charAt(i-k)=='a' ||s.charAt(i-k)=='e' ||s.charAt(i-k)=='i' ||s.charAt(i-k)=='o' ||s.charAt(i-k)=='u'){
                c--;
            }
            if(s.charAt(i)=='a' ||s.charAt(i)=='e' ||s.charAt(i)=='i' ||s.charAt(i)=='o' ||s.charAt(i)=='u'){
                c++;
            }
            mx=Math.max(mx,c);
        }
        return mx;
    }
}