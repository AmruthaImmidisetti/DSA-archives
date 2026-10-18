class Solution {
public:
    vector<int> lastVisitedCell(vector<vector<char>>& grid) {
        int n = grid.size();
        int m = grid[0].size();
        int i = 0, j = 0;
        vector<vector<bool>> b(n, vector<bool>(m, false));
        b[0][0] = true;
        while (true) {
            int newR = i, newC = j;
            
            if (grid[i][j] == 'U')
                newR--;
            if (grid[i][j] == 'D')
                newR++;
            if (grid[i][j] == 'R')
                newC++;
            if (grid[i][j] == 'L')
                newC--;
            if(newR < 0 || newR >= n || newC < 0 || newC >= m) {
                return {i, j};
            }
            if(b[newR][newC]) return {i, j};
            i = newR;
            j = newC;
            b[i][j] = true;
        }
        return {0, 0};
    }
};