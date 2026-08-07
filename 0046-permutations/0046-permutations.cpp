class Solution {
public:
    vector<vector<int>> ans;
    void solve(int n, vector<int> nums, vector<int> arr, vector<bool> &vis) {
        if(arr.size() == n) {
            ans.push_back(arr);
            return;
        }
        for(int i = 0; i < n; i++) {
            if(vis[i])  continue;
            arr.push_back(nums[i]);
            vis[i] = true;
            solve(n, nums, arr, vis);
            arr.pop_back();
            vis[i] = false;
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        int n = nums.size(), ind = 0;
        vector<int>arr;
        vector<bool>vis(n, false);
        solve(n, nums, arr, vis);
        return ans;
    }
};