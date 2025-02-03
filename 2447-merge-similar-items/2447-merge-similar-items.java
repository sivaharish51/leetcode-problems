class Solution {
    public List<List<Integer>> mergeSimilarItems(int[][] items1, int[][] items2) {
        List<List<Integer>> ans=new ArrayList<>();
        Map<Integer,Integer> a=new TreeMap<>();
        for(int[] i:items1){
            a.put(i[0],a.getOrDefault(i[0],0)+i[1]);
        }
        for(int[] i:items2){
            a.put(i[0],a.getOrDefault(i[0],0)+i[1]);
        }
        for(var i:a.keySet()){
            List<Integer> l=new ArrayList<>();
            l.add(i);
            l.add(a.get(i));
            ans.add(l);
        }
        return ans;
    }
}