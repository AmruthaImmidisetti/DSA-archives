class Solution {
public:
    bool checkValid(vector<vector<int>>& matrix) {
        unordered_map<int, set<int>>row, col;
        for(int i = 0;i<matrix.size();i++) {
            for(int j=0;j<matrix.size();j++) {
                row[i].insert(matrix[i][j]);
                col[j].insert(matrix[i][j]);
            }
        }
        for(int i=0;i<matrix.size();i++) {
            if(row[i].size() != col[i].size()) return false;
            else if(row[i].size() == col[i].size()) {
                if((row[i].size() != matrix.size()) || (col[i].size() != matrix.size())) return false;
                if(row[i] != col[i]) return false;
            }
        }
        return true;
    }
};