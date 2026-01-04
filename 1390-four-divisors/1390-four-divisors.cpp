class Solution {
public:
    int sumFourDivisors(vector<int>& nums) {
        int Sum = 0, totSum = 0;
        for (int i = 0; i < nums.size(); i++) {
            int c = 0;
            for (int j = 1; j <= nums[i]; j++) {
                if (nums[i] % j == 0) {
                    c++;
                    Sum += j;
                }
                if (c > 4) {
                    Sum = 0;
                    break;
                }
            }
            if (c == 4)
                totSum += Sum;
            Sum = 0;
        }
        return totSum;
    }
};