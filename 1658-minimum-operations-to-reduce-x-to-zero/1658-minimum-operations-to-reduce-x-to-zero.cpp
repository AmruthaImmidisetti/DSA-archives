class Solution {
public:
    int minOperations(vector<int>& nums, int x) {
        int k = accumulate(nums.begin(), nums.end(), 0) - x;
        if(k < 0) return -1;
        if(k == 0) return nums.size();
        int i = 0, maxLen = -1, Sum  = 0;
        for(int j = 0; j < nums.size(); j++) {
            Sum += nums[j];
            while(i <= j &&Sum > k) {
                Sum -= nums[i++];
            }
            if(Sum == k) {
                maxLen = max(maxLen, j - i + 1);
            }
        }
        return (maxLen == -1)?-1:((int)nums.size() - maxLen);
    }
};