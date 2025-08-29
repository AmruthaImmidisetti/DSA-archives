class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        int m = matrix.size(), n = matrix[0].size();
        int r_start = 0, r_end = m - 1;
        int c_start = 0, c_end = n - 1;
        vector<int> res;

        while (r_start <= r_end && c_start <= c_end) {
            int j = c_start;
            while (j <= c_end) {                 
                res.push_back(matrix[r_start][j]);
                j++;
            }
            r_start++;

            int i = r_start;
            while (i <= r_end) {               
                res.push_back(matrix[i][c_end]);
                i++;
            }
            c_end--;

            if (r_start <= r_end) {
                int jj = c_end;
                while (jj >= c_start) {       
                    res.push_back(matrix[r_end][jj]);
                    jj--;
                }
                r_end--;
            }

            if (c_start <= c_end) {
                int ii = r_end;
                while (ii >= r_start) {         
                    res.push_back(matrix[ii][c_start]);
                    ii--;
                }
                c_start++;
            }
        }
        return res;
    }
};
