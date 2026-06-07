class Solution {
public:
    vector<vector<string>> ans;
    bool isSafe(vector<vector<string>>& NQueens, int row, int col) {
        for (int i = 0; i < row; i++) {
            if (NQueens[i][col] == "Q")
                return false;
        }

        int i = row, j = col;
        while (i > 0 && j > 0) {
            if (NQueens[i - 1][j - 1] == "Q")
                return false;
            i--;
            j--;
        }

        int k = row, l = col;
        while (k > 0 && l < NQueens.size() - 1) {
            if (NQueens[k - 1][l + 1] == "Q")
                return false;
            k--;
            l++;
        }
        return true;
    }
    
    void solve(int n, vector<vector<string>>& NQueens, int row) {
        if (row == n) {
            vector<string> board;
            for (int i = 0; i < n; i++) {
                string s = "";
                for (int j = 0; j < n; j++) {
                    s += NQueens[i][j];
                }
                board.push_back(s);
            }
            ans.push_back(board);
            return;
        }
        for (int col = 0; col < NQueens[0].size(); col++) {
            if (isSafe(NQueens, row, col)) {
                NQueens[row][col] = "Q";
                solve(n, NQueens, row + 1);
                NQueens[row][col] = ".";
            }
        }
    }
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> NQueens(n, vector<string>(n, "."));
        solve(n, NQueens, 0);
        return ans;
    }
};