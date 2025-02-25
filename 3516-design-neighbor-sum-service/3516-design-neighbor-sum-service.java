class NeighborSum {
    HashMap<Integer, Integer> adjacent = new HashMap<>();
    HashMap<Integer, Integer> diagonal = new HashMap<>();

    public NeighborSum(int[][] grid) {
        int m = grid.length;
        int n = grid.length;
        for (int i = 0; i < m; i++)
            for (int j = 0; j < n; j++) {
                int value = grid[i][j];
                adjacent.put(value, adjacent.getOrDefault(value, 0));
                adjacent.put(value, adjacent.get(value) + (i - 1 >= 0 ? grid[i - 1][j] : 0));
                adjacent.put(value, adjacent.get(value) + (i + 1 < m  ? grid[i + 1][j] : 0));
                adjacent.put(value, adjacent.get(value) + (j - 1 >= 0 ? grid[i][j - 1] : 0));
                adjacent.put(value, adjacent.get(value) + (j + 1 < n  ? grid[i][j + 1] : 0));

                diagonal.put(value, diagonal.getOrDefault(value, 0));
                diagonal.put(value, diagonal.get(value) + (i + 1 < m  && j + 1 < n  ? grid[i + 1][j + 1] : 0));
                diagonal.put(value, diagonal.get(value) + (i + 1 < m  && j - 1 >= 0 ? grid[i + 1][j - 1] : 0));
                diagonal.put(value, diagonal.get(value) + (i - 1 >= 0 && j - 1 >= 0 ? grid[i - 1][j - 1] : 0));
                diagonal.put(value, diagonal.get(value) + (i - 1 >= 0 && j + 1 < n  ? grid[i - 1][j + 1] : 0));
            }
    }
    
    public int adjacentSum(int value) {
        return adjacent.get(value);
    }
    
    public int diagonalSum(int value) {
        return diagonal.get(value);
    }
}