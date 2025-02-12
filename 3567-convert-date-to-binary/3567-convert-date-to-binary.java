class Solution {
    public String convertDateToBinary(String date) {
        int s1=Integer.parseInt(date.substring(0,4));
        int s2=Integer.parseInt(date.substring(5,7));
        int s3=Integer.parseInt(date.substring(8,10)); 
        String s=Integer.toBinaryString(s1)+"-"+Integer.toBinaryString(s2)+"-"+Integer.toBinaryString(s3);
        return s;

    }
}