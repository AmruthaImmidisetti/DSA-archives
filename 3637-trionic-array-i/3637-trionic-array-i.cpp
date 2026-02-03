class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if (n < 4) return false;

        int p = -1, q = -1;
        for (int i = 0; i < n - 1; i++) {
            if (nums[i] < nums[i + 1]) continue;
            if (nums[i] > nums[i + 1]) {
                p = i;
                break;
            }
            return false;
        }

        if (p <= 0) return false;
        for (int i = p + 1; i < n - 1; i++) {
            if (nums[i] > nums[i + 1]) continue;
            if (nums[i] < nums[i + 1]) {
                q = i;
                break;
            }
            return false;
        }

        if (q <= p || q >= n - 1) return false;
        for (int i = q + 1; i < n - 1; i++) {
            if (nums[i] >= nums[i + 1]) return false;
        }

        return true;
    }
};
