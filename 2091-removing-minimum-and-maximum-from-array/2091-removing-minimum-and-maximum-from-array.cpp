class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int minInd = min_element(nums.begin(), nums.end()) - nums.begin();
        int maxInd = max_element(nums.begin(), nums.end()) - nums.begin();
       
        int ans = INT_MAX;
        int minimum = min(minInd, maxInd);
        int maximum = max(minInd, maxInd);

        int f = maximum + 1;
        int s = nums.size() - minimum;
        int t = minimum + (nums.size() - maximum)+1;
        return min(min(f,s), t);
    }
};