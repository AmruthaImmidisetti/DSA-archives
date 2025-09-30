class Solution {
public:
    int triangularSum(vector<int>& nums) {
        for (int i = nums.size(); i > 1; i--) {
            for (int j = 0; j < nums.size() - 1; j++) {
                nums[j] = (nums[j] + nums[j + 1]) % 10;
            }
        }
        return nums[0];
    }
};