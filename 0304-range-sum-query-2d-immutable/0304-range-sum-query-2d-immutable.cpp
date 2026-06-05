class NumMatrix {
    vector<vector<int>> arr;

public:
    NumMatrix(vector<vector<int>>& matrix) {
        for (int i = 0; i < matrix.size(); i++) {
            for (int j = 0; j < matrix[i].size(); j++) {
                if (i == 0 && j == 0)
                    continue;
                else if (i == 0)
                    matrix[i][j] += matrix[i][j - 1];
                else if (j == 0)
                    matrix[i][j] += matrix[i - 1][j];
                else
                    matrix[i][j] += matrix[i][j - 1] + matrix[i - 1][j] - matrix[i-1][j-1];
            }
        }

        matrix.insert(matrix.begin(), vector<int>(matrix[0].size(), 0));
        for (int i = 0; i < matrix.size(); i++) {
            matrix[i].insert(matrix[i].begin(), 0);
        }

        arr = matrix;
    }
    int sumRegion(int row1, int col1, int row2, int col2) {
        row1++;
        col1++;
        row2++;
        col2++;
        int res =  arr[row2][col2] - arr[row1-1][col2] - arr[row2][col1-1] +
        arr[row1-1][col1-1];
        return res;
    }
};

/**
 * Your NumMatrix object will be instantiated and called as such:
 * NumMatrix* obj = new NumMatrix(matrix);
 * int param_1 = obj->sumRegion(row1,col1,row2,col2);
 */