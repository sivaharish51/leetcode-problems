class Solution {
    public long maxEnergyBoost(int[] energyDrinkA, int[] energyDrinkB) {
        long da=0,db=0;
        for(int i=0;i<energyDrinkA.length;i++){
            long a=Math.max(db,da+energyDrinkA[i]);
            long b=Math.max(da,db+energyDrinkB[i]);
            da=a;
            db=b;
        }
        return Math.max(da,db);
    }
}