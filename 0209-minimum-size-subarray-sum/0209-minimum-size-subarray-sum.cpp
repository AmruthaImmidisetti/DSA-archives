class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0, j = 0, Sum = 0, minLen = INT_MAX;
        while (j < nums.size()) {
            if (Sum >= target) {
                minLen = min(minLen, j - i);
                Sum -= nums[i];
                i++;
            }  else if (Sum < target) {
                    Sum += nums[j];
                    j++;
            }
        }
        if(j == nums.size()){
            for(int k = i ; k < nums.size();k++){
                if(Sum >= target) minLen = min(minLen, j - k);
                Sum -= nums[k];
                cout << Sum << " ";
            }
        }
        return (minLen == INT_MAX) ? 0 : minLen;
    }
};