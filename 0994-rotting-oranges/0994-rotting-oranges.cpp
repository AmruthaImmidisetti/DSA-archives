class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int m = grid.size();
        int n = grid[0].size();
        int freshOranges = 0;
        queue<pair<int, int>> q;
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 2) {
                    q.push({i, j});
                } else if (grid[i][j] == 1)
                    freshOranges++;
            }
        }
        // 2 1 1
        // 1 1 1
        // 0 1 2
        if (freshOranges == 0)
            return 0;
        int cnt = 0;
        while (!q.empty() && freshOranges > 0) {
            int sz = q.size();
            for (int k = 0; k < sz; k++) {
                auto [i, j] = q.front();
                q.pop();
                if (grid[i][j] == 2) {
                    if (i - 1 != -1 && grid[i - 1][j] == 1) {
                        grid[i - 1][j] = 2;
                        q.push({i - 1, j});
                        freshOranges--;
                    }
                    if (j - 1 != -1 && grid[i][j - 1] == 1) {
                        grid[i][j - 1] = 2;
                        q.push({i, j - 1});
                        freshOranges--;
                    }
                    if (j + 1 != n && grid[i][j + 1] == 1) {
                        grid[i][j + 1] = 2;
                        q.push({i, j + 1});
                        freshOranges--;
                    }
                    if (i + 1 != m && grid[i + 1][j] == 1) {
                        grid[i + 1][j] = 2;
                        q.push({i + 1, j});
                        freshOranges--;
                    }
                }
            }
            cnt++;
        }
        if (freshOranges > 0)
            return -1;
        return cnt;
    }
};