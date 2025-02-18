class Solution {
    public String smallestNumber(String pattern) {
        int n=pattern.length();
        String res="";
        Stack<Character> s=new Stack<>();
        for(int i=1;i<=n+1;i++){
            s.push((char)(i+'0'));
            if(i==n+1 || pattern.charAt(i-1)=='I'){
                while(!s.isEmpty()){
                    res+=s.pop();
                }
            }
        }
        return res.toString();
    }
}