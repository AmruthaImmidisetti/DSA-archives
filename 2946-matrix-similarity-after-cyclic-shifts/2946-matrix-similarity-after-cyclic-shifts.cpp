class Solution {
public:
    bool areSimilar(vector<vector<int>>& mat, int k) {
        vector<vector<int>> arr(mat.begin(), mat.end());
        int m = mat.size();
        int n = mat[0].size();
        for(int i = 0; i < m; i++) {
            for(int j = 0; j < n; j++) {
                arr[i][(j + k) % n] = mat[i][j];
            }
        }

        return mat == arr;
    }
};