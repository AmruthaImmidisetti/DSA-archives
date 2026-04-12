class Solution {
public:
    int countDigitOccurrences(vector<int>& nums, int digit) {
        int totalCnt = 0;
        char digi = digit+'0';
        for(int i=0;i<nums.size();i++) {
            string num = to_string(nums[i]);
            totalCnt += count(num.begin(), num.end(), digi);
        }
        return totalCnt;
    }
};