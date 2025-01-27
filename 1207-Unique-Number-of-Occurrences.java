class Solution {
    public boolean uniqueOccurrences(int[] arr) {
        int n=arr.length;
        HashMap<Integer,Integer> h=new HashMap<>();
        for(int i=0;i<n;i++){
            h.put(arr[i], h.getOrDefault(arr[i], 0) + 1);
        }
        Set<Integer> s=new HashSet<>();
        for(int i=0;i<n;i++){
            s.add(h.get(arr[i]));
        }
        if(h.size()==s.size()){
            return true;
        }
        else{
            return false;
        }
        // ArrayList<Integer> a=new ArrayList<>();
        // for(int i=0;i<n;i++){
        //     a[arr[i]]++;
        // }
        // ArrayList<Integer> a1=new ArrayList<>();
        // for(int i=0;i<n;i++){
        //     if(a1.contains(a[arr[i]]));{
        //         return false;
        //     }
        //     a1.add(a[arr[i]]);
        // }
        // return true;
    }
}