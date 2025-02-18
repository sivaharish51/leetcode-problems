class Solution {
    public int leastBricks(List<List<Integer>> wall) {
        Map<Integer,Integer> m=new HashMap<>();
        int mx=0;
        for(int i=0;i<wall.size();i++){
            int rs=0;
            for(int j=0;j<wall.get(i).size()-1;j++){
                int v=wall.get(i).get(j);
                rs+=v;
                m.put(rs,m.getOrDefault(rs,0)+1);
                mx=Math.max(mx,m.get(rs));
            }
        } 
        return wall.size()-mx;
    }
}