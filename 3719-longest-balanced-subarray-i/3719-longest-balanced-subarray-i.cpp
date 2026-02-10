class Solution {
public:
    int longestBalanced(vector<int>& nums) {
        int maxLen = 0;
        map<int, int>mp;
        for (int i = 0; i < nums.size(); i++) {
            int even = 0, odd = 0;
            for (int j = i; j < nums.size(); j++) {
                if (mp.find(nums[j]) == mp.end()) {
                    mp[nums[j]]++;
                    if (nums[j] % 2 == 0)
                        even++;
                    else
                        odd++;
                }
                if (even == odd)
                    maxLen = max(maxLen, j - i + 1);
            }
            mp.clear();
        }
        return maxLen;
    }
};