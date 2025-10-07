class Solution {
public:
    int longestSubsequence(vector<int>& nums) {
        int xori = 0, cnt = 0, zero = 0, n = nums.size();
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0)
                cnt++;
            xori ^= nums[i];
        }
        if (cnt == 0)
            return 0;
        else if (xori == 0)
            return n - 1;
        else return n;
    }
};