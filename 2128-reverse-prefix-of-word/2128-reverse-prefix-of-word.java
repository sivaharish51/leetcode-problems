class Solution {
    public String reversePrefix(String word, char ch) {
        int n=word.length();
        int in=0;
        for(int i=0;i<n;i++){
            if(ch==word.charAt(i)){
                in=i;
                break;
            }
        }
        String s="";
        for(int i=in;i>=0;i--){
            s+=word.charAt(i);
        }
        for(int i=in+1;i<n;i++){
            s+=word.charAt(i);
        }
        return s;
    }
}