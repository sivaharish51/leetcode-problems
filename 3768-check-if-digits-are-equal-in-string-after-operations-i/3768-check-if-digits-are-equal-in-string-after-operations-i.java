class Solution {
    public boolean hasSameDigits(String s) {
        while(s.length()>2){
            String s1="";
            for(int i=0;i<s.length()-1;i++){
                int news=((s.charAt(i)-'0')+(s.charAt(i+1)-'0'))%10;
                s1+=news;
            }
            s=s1;
        }
        return s.charAt(0)==s.charAt(1);
    }
}