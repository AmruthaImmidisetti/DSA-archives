class Solution {
public:
    set<vector<int>> res;
    void solve(vector<int>& candidates, int n, int target, vector<int>& curr,
               int ind, int Sum) {
        if (Sum == target) {
            res.insert(curr);
            return;
        }
        if (Sum > target)
            return;
        for (int i = ind; i < n; i++) {
            if (i > ind && candidates[i] == candidates[i - 1])
                continue;
            Sum += candidates[i];
            curr.push_back(candidates[i]);

            solve(candidates, n, target, curr, i + 1, Sum);

            Sum -= candidates[i];
            curr.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> curr;
        int n = candidates.size();
        solve(candidates, n, target, curr, 0, 0);
        vector<vector<int>> arr(res.begin(), res.end());
        return arr;
    }
};