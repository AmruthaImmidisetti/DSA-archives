class Solution {
public:
    int firstMissingPositive(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int ans = 1;
        for (int n : nums) {
            if (n == ans) {
                ans++;
            } else if (n > ans) {
                return ans;
            }
        }
        
        return ans;    
    }
};