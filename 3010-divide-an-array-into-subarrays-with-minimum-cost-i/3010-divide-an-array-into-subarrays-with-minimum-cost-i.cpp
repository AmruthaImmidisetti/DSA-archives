class Solution {
public:
    int minimumCost(vector<int>& nums) {
        vector<int> res = nums;
        sort(res.begin(), res.end());
        int Sum = 0;
        Sum += res[0] + res[1];
        if (nums[0] == res[0] || nums[0] == res[1] || nums[0] == res[2])
            Sum += res[2];
        else
            Sum += nums[0];
        return Sum;
    }
};