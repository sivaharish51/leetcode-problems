class Solution {
    public int firstUniqChar(String s) {
        int[] arr = new int[26];

        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            arr[ch-'a']++;
        }
        for(int i=0;i<s.length();i++){
            char ch=s.charAt(i);
            if(arr[ch-'a']==1){
                return i;
            }
        }
        return -1;
        // HashMap<char,Integer> m=new HashMap<>();   
        // for(int i=0)
    }
}