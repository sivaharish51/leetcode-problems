class Solution {
    public List<List<Integer>> generate(int numRows) {
        int n=numRows;
        List<List<Integer>> res=new ArrayList<>();
        for(int i=0;i<n;i++){
            List<Integer> a=new ArrayList<>();
            for(int j=0;j<=i;j++){
                if(j==0||j==i){
                    a.add(1);
                }
                else{
                    a.add(res.get(i-1).get(j-1)+res.get(i-1).get(j));
                }
            }
            res.add(a);
        }
        return res;
    }
}