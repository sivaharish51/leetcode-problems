class Solution {
    public long maxWeight(int[] pizzas) {
       int n=pizzas.length;
    
       Arrays.sort(pizzas);
       int i=n-1;
       long s=0,td=n/4,od=(td+1)/2;
       for(int d=1;d<=td;d++){
        if(d>od) i--;
        s+=(long)pizzas[i];
        i--;
       } 
       return s;
    }
}