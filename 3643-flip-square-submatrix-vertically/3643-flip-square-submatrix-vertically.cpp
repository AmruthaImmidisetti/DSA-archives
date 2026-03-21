class Solution {
public:
    static vector<vector<int>> reverseSubmatrix(vector<vector<int>>& grid, int x, int y, int k) {
        // 00 01 02 03
        // 10 11 12 13
        // 20 21 22 23
        // 30 31 32 33
        for(int i=x, b=x+k-1; i<b; i++, b--){
            for(int j=y; j<y+k; j++)
                swap(grid[i][j], grid[b][j]);
        }
        return grid;
    }
};