class Solution {
public:
    vector<vector<int>> res;
    void getCombinations(vector<int>& arr, int size, int n, int k,
                         vector<int>& curr, int ind, int Sum) {
        if (curr.size() == k && Sum == n) {
            res.push_back(curr);
            return;
        }
        if (curr.size() > k)
            return;
        for (int i = ind; i < size; i++) {
            Sum += arr[i];
            curr.push_back(arr[i]);
            getCombinations(arr, size, n, k, curr, i + 1, Sum);
            Sum -= arr[i];
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum3(int k, int n) {
        vector<int> arr;
        for (int i = 1; i <= 9; i++)
            arr.push_back(i);
        vector<int> curr;
        getCombinations(arr, 9, n, k, curr, 0, 0);
        return res;
    }
};