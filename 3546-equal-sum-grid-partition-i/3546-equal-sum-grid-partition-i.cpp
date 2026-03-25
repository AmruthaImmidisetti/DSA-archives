class Solution {
public:
    bool canPartitionGrid(vector<vector<int>>& grid) {
       int m = grid.size(), n = grid[0].size();
        
    long long tot = 0;
    for (int i = 0; i < m; ++i) {
        for (int j = 0; j < n; ++j) {
            tot += grid[i][j];}}

    if (tot % 2 != 0) {return false;}

    long long h = tot / 2;
    long long row = 0;
    for (int i = 0; i < m - 1; ++i) {
        for (int j = 0; j < n; ++j) {
            row += grid[i][j];
        }
        if (row == h) {return true;}
    }

    vector<long long> col(n, 0);
    for (int j = 0; j < n; ++j) {
        for (int i = 0; i < m; ++i) {
            col[j] += grid[i][j];
        }
    }

    long long res = 0;
    for (int j = 0; j < n - 1; ++j) {
        res += col[j];
        if (res == h) {return true;}
    }
    return false;
        
    }
};