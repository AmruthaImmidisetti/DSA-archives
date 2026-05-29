class Solution {
public:
    vector<vector<int>> arr;
    void solve(vector<int>& candidates, int target, vector<int>& res, int Sum, int ind) {
        if (Sum == target) {
            arr.push_back(res);
            return;
        }
        if(Sum > target) return;
        for (int i = ind; i < candidates.size(); i++) {
            Sum += candidates[i];
            res.push_back(candidates[i]);
            solve(candidates, target, res, Sum, i);
            Sum -= candidates[i];
            res.pop_back();
        }
    }
    vector<vector<int>> combinationSum(vector<int>& candidates, int target) {
        vector<int> res;
        solve(candidates, target, res, 0, 0);
        return arr;
    }
};