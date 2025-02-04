class Solution {
    public int maxDifference(String s) {
       int n=s.length();
       Map<Character,Integer> m=new HashMap<>();
       for(int i=0;i<n;i++){
            char ch=s.charAt(i);
            m.put(ch,m.getOrDefault(ch,0)+1);
       }   

       int e=100,o=Integer.MIN_VALUE;
       for(int fre:m.values()){
            if(fre%2==0){
                if(fre<e) e=fre;
            }
            else{
                if(fre>o) o=fre;
            }
       }
    //    System.out.print(e);
    //    System.out.print(o);
    // if (e == Integer.MIN_VALUE) e=0;
    // if (o== Integer.MIN_VALUE) o=0;
       return o-e;
    }
}