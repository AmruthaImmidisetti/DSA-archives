class Solution {
public:
    vector<vector<int>> cyclicShift(int n, vector<vector<int>>& grid,
                                    vector<int>& rowShift,
                                    vector<int>& colShift) {
        for (int i = 0; i < rowShift.size(); i++) {
            int k = rowShift[i] % n;
            rotate(grid[i].begin(), grid[i].begin() + k, grid[i].end());
        }
        for (int i = 0; i < colShift.size(); i++) {
            int k = colShift[i] % n;
            vector<int> arr(n);

            for (int j = 0; j < n; j++) {
                arr[j] = grid[(j + k) % n][i];
            }

            for (int j = 0; j < n; j++) {
                grid[j][i] = arr[j];
            }
        }
        return grid;
    }
};