class Solution {
public:
    int m , n;
    int traverse(vector<vector<int>>& grid, int i, int j, vector<vector<bool>>& vis, int k) {
        if(i < 0 || j < 0 || i >=m || j >= n || vis[i][j] || grid[i][j] <= 0) {
            return 0;
        }
        vis[i][j] = true;
        int Sum = grid[i][j] % k;

        Sum = (Sum + traverse(grid, i - 1, j, vis, k)) % k;
        Sum = (Sum + traverse(grid, i + 1, j, vis, k)) % k;
        Sum = (Sum + traverse(grid, i, j - 1, vis, k)) % k;
        Sum = (Sum + traverse(grid, i, j + 1, vis, k)) % k;

        return Sum;
    }
    int countIslands(vector<vector<int>>& grid, int k) {
        m = grid.size();
        n = grid[0].size();
        vector<vector<bool>> vis(m, vector<bool>(n, false));
        int cnt  = 0;
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                if(grid[i][j] > 0 && !vis[i][j]) {
                    int tot = traverse(grid, i, j, vis, k);
                    if(tot == 0) cnt++;
                }
            }
        }
        return cnt;
    }
};