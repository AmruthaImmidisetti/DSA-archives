class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        vector<pair<int, int>> rows;
        vector<pair<int, int>> cols;
        for (int i = 0; i < n; i++) {
            int countOne = count(grid[i].begin(), grid[i].end(), 1);
            int countZero = m - countOne;
            rows.push_back({countOne, countZero});
        }
        int col = 0;
        while (col < m) {
            int cnt1= 0, cnt0 = 0;
            for (int j = 0; j < n; j++) {
                if(grid[j][col] == 1) cnt1++;
                else cnt0++;
            }
            col++;
            cols.push_back({cnt1, cnt0});
        }
        for(int i = 0; i<n;i++) {
            for(int j = 0; j< m; j++) {
                grid[i][j] = rows[i].first + cols[j].first - rows[i].second - cols[j].second;
            }
        }
        return grid;
    }
};