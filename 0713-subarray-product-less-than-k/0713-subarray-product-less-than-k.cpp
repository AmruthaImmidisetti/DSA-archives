class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;

        int i = 0;
        long long pro = 1;
        int count = 0;

        for (int j = 0; j < nums.size(); j++) {
            pro *= nums[j];

            while (pro >= k) {
                pro /= nums[i];
                i++;
            }

            count += (j - i + 1);
        }

        return count;
    }
};
