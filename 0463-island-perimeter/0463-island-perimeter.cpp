class Solution {
public:
    int islandPerimeter(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int peri = 0;
        int r[] = {-1, 0, 1, 0};
        int c[] = {0, -1, 0, 1};
        for (int i = 0; i < grid.size(); i++) {
            for (int j = 0; j < grid[i].size(); j++) {
                if (grid[i][j] == 1) {
                    peri += 4;
                    for (int k = 0; k < 4; k++) {
                        int nr = i + r[k];
                        int nc = j + c[k];
                        if (nr >= 0 && nr < n && nc >= 0 && nc < m &&
                            grid[nr][nc] == 1)
                            peri--;
                    }
                }
            }
        }
        return peri;
    }
};