class Solution {
public:
    bool found(int n, int m, int i, int j, vector<vector<char>>& board, int ind,
               string word) {
        if (i < 0 || j < 0 || i >= n || j >= m)
            return false;
        if (board[i][j] != word[ind]) 
            return false;
        if (ind == word.size() - 1)
            return true;
            
        char t = board[i][j];
        board[i][j] = '#';
        bool res = found(n, m, i - 1, j, board, ind + 1, word) ||
                   found(n, m, i, j - 1, board, ind + 1, word) ||
                   found(n, m, i + 1, j, board, ind + 1, word) ||
                   found(n, m, i, j + 1, board, ind + 1, word);
        board[i][j] = t;
        return res;
    }
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size(), m = board[0].size();
        int ind = 0;
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (found(n, m, i, j, board, ind, word))
                    return true;
            }
        }
        return false;
    }
};