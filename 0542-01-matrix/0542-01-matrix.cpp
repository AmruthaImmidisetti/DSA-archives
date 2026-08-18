class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();
        queue<pair<int, int>> pq;
        vector<vector<int>> dist(n, vector<int>(m, -1));
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (mat[i][j] == 0) {
                    pq.push({i, j});
                    dist[i][j] = 0;
                }
            }
        }
        vector<int> nr = {-1, 0, 1, 0};
        vector<int> nc = {0, -1, 0, 1};
        while (!pq.empty()) {
            auto [i, j] = pq.front();
            pq.pop();
            for (int k = 0; k <= 3; k++) {
                int r = i + nr[k];
                int c = j + nc[k];

                if (r >= 0 && r < n && c >= 0 && c < m && dist[r][c] == -1) {
                    dist[r][c] = dist[i][j] + 1;
                    pq.push({r, c});
                }
            }
        }
        return dist;
    }
};