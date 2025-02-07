class Solution {
    public int generateKey(int num1, int num2, int num3) {
        String s1=String.format("%04d",num1),s2=String.format("%04d",num2),s3=String.format("%04d",num3);
        String mx="";
        for(int i=0;i<4;i++){
            mx+=Math.min(s1.charAt(i)-'0',Math.min(s2.charAt(i)-'0',s3.charAt(i)-'0'));     
        }
    return Integer.parseInt(mx);
    }
}