class Solution {
    public int minOperations(int[] nums, int k) {
        int n=nums.length;
        // List<Integer> l=new ArrayList<>();
        // for(int i=0;i<n;i++){
        //     l.add(nums[i]);
        // }   
        // if(n==1){
        //     //if(l.get(0)>k) 
        //     return 0;

        // }
        // int c=0;
        // while(l.get(0)<k && l.size()>1){
        //     Collections.sort(l);
        //     if(l.get(0)<k && l.size()>1){
        //         int a=l.get(0)*2+l.get(1);
        //         l.remove(1);
        //         l.remove(0);
        //         l.add(a);
        //         c++;
        //     }
        //     else{
        //         break;
        //     }
        //      Collections.sort(l);
        // }
        // return c;
        PriorityQueue<Long> p = new PriorityQueue<>();
        for(int i=0;i<n;i++){
            p.add((long)nums[i]);
        } 
        int c=0;
        while(p.peek()<k && p.size()>1){
            long f=p.poll();
            long s=p.poll();
            long a=f*2+s;
            p.add(a);
            c++;
        }
        return c;
        
        
        
    }
}