class Solution {
public:
    bool traverse(int i, int j, int n, int m, vector<vector<int>>& grid) {
        if (i < 0 || j < 0 || i >= n || j >= m) {
            return false;
        }
        if(grid[i][j]) return true;
        grid[i][j] = 1;
        return traverse(i - 1, j, n, m, grid) &
               traverse(i + 1, j, n, m, grid) &
               traverse(i, j - 1, n, m, grid) &
               traverse(i, j + 1, n, m, grid);
    }
    int closedIsland(vector<vector<int>>& grid) {
        int cnt = 0;
        int n = grid.size(), m = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (!grid[i][j]) {
                    cnt += traverse(i, j, n, m, grid);
                }
            }
        }
        return cnt;
    }
};