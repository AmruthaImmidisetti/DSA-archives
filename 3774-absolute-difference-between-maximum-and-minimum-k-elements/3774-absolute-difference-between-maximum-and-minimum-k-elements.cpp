class Solution {
public:
    int absDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int smallest_sum = accumulate(nums.begin(), nums.begin() + k, 0);
        sort(nums.rbegin(), nums.rend());
        int largest_sum = accumulate(nums.begin(), nums.begin() + k, 0);
        return abs(smallest_sum - largest_sum);
    }
};