class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        long long sum1 = 0, sum2 = 0;
        for(int i=0;i<nums.size();i++) if(nums[i]<0) nums[i]= nums[i]*-1;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < nums.size() / 2; i++) {
            sum1 += (nums[i] * nums[i]);
        }
        for (int i = nums.size() / 2; i < nums.size(); i++) {
            sum2 += (nums[i] * nums[i]);
        }
        return sum2 - sum1;
    }
};