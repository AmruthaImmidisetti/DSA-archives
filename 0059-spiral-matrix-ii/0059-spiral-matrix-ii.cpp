class Solution {
public:
    // 00 01 02
    // 10 11 12
    // 20 21 22
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>arr(n, vector<int>(n,0));
        int num = 1;
        int r_start = 0, r_end = n-1;
        int c_start = 0, c_end = n-1;
        while(r_start <= r_end && c_start <= c_end){
            int i = c_start;
            while(i <= c_end){
                if(arr[r_start][i] == 0)  {arr[r_start][i] = num;}
                i++;
                num++;
            }
            r_start++;
            
            int j = r_start;
            while(j <= r_end){
                if(arr[j][c_end] == 0) {arr[j][c_end] = num;}
                j++;
                num++;
            }
            c_end--;

            int k = c_end;
            if(r_start <= r_end){
                while(k >= c_start){
                    if(arr[r_end][k] == 0) {arr[r_end][k] = num;}
                    k--;
                    num++;
                }
                r_end--;
            }
            
            int l = r_end;
            if(c_start <= c_end){
                while(l >= r_start){
                    if(arr[l][c_start] == 0){
                        arr[l][c_start] = num;
                        l--;
                        num++;
                    }
                }
                c_start++;
            }

        }
        return arr;
    }
};