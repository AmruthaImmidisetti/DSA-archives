class Solution {
public:
    int missingInteger(vector<int>& nums) {
        unordered_set<int> mp(nums.begin(), nums.end());
        int Sum = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                Sum += nums[i];
            } else {
                break;
            }
        }
        while(mp.find(Sum) != mp.end())
            Sum++;
       return Sum;
    }
};