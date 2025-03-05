class Solution {
    public int numberOfSpecialChars(String word) {
        int n=word.length();
        int c=0;
        int[] a1=new int[26];
        int[] a2=new int[26];
        for(int i=0;i<n;i++){
            char ch=word.charAt(i);
            if(ch>='a' && ch<='z'){
                a1[ch-'a']++;
            }
            else{
                a2[ch-'A']++;
            }
        }
        for(int i=0;i<26;i++){
            if(a1[i]>0 && a2[i]>0){
                c++;
            }
        }
        return c;
    }
}