class Solution {
    public long maximumPoints(int[] enemyEnergies, int currentEnergy) {
        Arrays.sort(enemyEnergies);
        if(currentEnergy<enemyEnergies[0]) return 0; 
        long s=currentEnergy;
        for(int i=1;i<enemyEnergies.length;i++){
            s+=enemyEnergies[i];
        }   
        return s/enemyEnergies[0];
    }
}