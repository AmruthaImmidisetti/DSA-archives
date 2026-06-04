class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
        unordered_map<int, vector<int>> row, col;
        map<pair<int, int>, vector<int>> square;
        for (int i = 0; i < board.size(); i++) {
            for (int j = 0; j < board.size(); j++) {
                if (board[i][j] != '.') {
                    if(count(row[i].begin(), row[i].end(), board[i][j]-'0')) return false;
                    else row[i].push_back(board[i][j]-'0');
                    if(count(col[j].begin(), col[j].end(), board[i][j]-'0')) return false;
                    else col[j].push_back(board[i][j]-'0');
    
                    int r = i / 3, c = j / 3;
                    if(count(square[{r, c}].begin(), square[{r, c}].end(), board[i][j]-'0'))  return false;
                    else square[{r, c}].push_back(board[i][j]-'0');
                }
            }
        }
        return true;
    }
};