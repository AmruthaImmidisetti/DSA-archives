class Solution {
public:
    int numberOfArithmeticSlices(vector<int>& nums) {
        int r = 0;
        for(int i = 0; i < nums.size(); i++) {
            for(int j = i + 2; j < nums.size(); j++) {
                int d = nums[i+1] - nums[i];
                bool isArithmetic = true;
                for(int k = i + 1; k <= j; k++) {
                    if(nums[k] - nums[k - 1] != d) {
                        isArithmetic = false;
                        break;
                    }
                }
                if(isArithmetic) r++;
            }
        }
        return r;
    }
};
