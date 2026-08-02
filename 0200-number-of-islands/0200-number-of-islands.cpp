class Solution {
public:
    void traverse(int i, int j, int n, int m, vector<vector<char>>& grid,
                  vector<vector<bool>>& vis) {
        if (i < 0 || j < 0 || i >= n || j >= m || grid[i][j] != '1' || vis[i][j]) {
            return;
        }
        vis[i][j] = true;
        traverse(i - 1, j, n, m, grid, vis);
        traverse(i + 1, j, n, m, grid, vis);
        traverse(i, j - 1, n, m, grid, vis);
        traverse(i, j + 1, n, m, grid, vis);
    }
    int numIslands(vector<vector<char>>& grid) {
        int islands = 0;
        int n = grid.size(), m = grid[0].size();
        vector<vector<bool>> vis(n, vector<bool>(m, false));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (grid[i][j] == '1' && !vis[i][j]) {
                    islands++;
                    traverse(i, j, n, m, grid, vis);
                }
            }
        }
        return islands;
    }
};