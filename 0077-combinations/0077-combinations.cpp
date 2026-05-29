class Solution {
public:
    vector<vector<int>> res;
    void solve(int n, vector<int>& arr, int i, int k, vector<int>& currArr) {
        if (currArr.size() == k) {
            res.push_back(currArr);
            return;
        }
        for (int j = i; j < n; j++) {
            currArr.push_back(arr[j]);
            solve(n, arr, j+1, k, currArr);
            currArr.pop_back();
        }
    }
    vector<vector<int>> combine(int n, int k) {
        vector<int> arr;
        for (int i = 1; i <= n; i++)
            arr.push_back(i);
        vector<int> currArr;
        solve(n, arr, 0, k, currArr);
        return res;
    }
};