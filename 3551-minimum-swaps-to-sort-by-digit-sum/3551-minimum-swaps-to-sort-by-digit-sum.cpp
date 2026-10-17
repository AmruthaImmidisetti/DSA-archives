
class Solution {
public:
    int digitSum(int num) {
        int sum = 0;
        while (num > 0) {
            sum += num % 10;
            num /= 10;
        }
        return sum;
    }
    int minSwaps(vector<int>& nums) {
        int n = nums.size();
        vector<pair<int, int>> arr;
        for (int i = 0; i < n; i++) {
            arr.push_back({digitSum(nums[i]), nums[i]});
        }

        sort(arr.begin(), arr.end());

        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++) {
            mp[arr[i].second] = i;
        }
        vector<bool> vis(n, false);
        int swaps = 0;

        for (int i = 0; i < n; i++) {
            if (vis[i]) {
                continue;
            }
            int sz = 0;
            int j = i;
            while (!vis[j]) {
                vis[j] = true;
                j = mp[nums[j]];
                sz++;
            }
            if (sz > 1) {
                swaps += sz - 1;
            }
        }
        return swaps;
    }
};
