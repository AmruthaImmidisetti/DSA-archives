class Solution {
public:
    vector<long long> distance(vector<int>& nums) {
        unordered_map<int, vector<long long>> mp;
        int n = nums.size();
        vector<long long> arr(n, 0);
        for(int i = 0; i < n; i++) {
            mp[nums[i]].push_back(i);
        }

        for(auto &it : mp) {
            vector<long long> &v = it.second;
            int m = v.size();

            long long total = 0;
            for(auto x : v) total += x;
            long long pre = 0;

            for(int i = 0; i < m; i++) {
                long long left = (long long)i * v[i] - pre;
                long long right = (total - pre - v[i]) - (long long)(m - i - 1) * v[i];

            arr[v[i]] = left + right;
                pre += v[i];
            }
        }

        return arr;
    }
};