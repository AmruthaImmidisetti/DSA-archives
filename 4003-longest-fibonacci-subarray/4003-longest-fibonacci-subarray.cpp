class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        // 1 1 2 3 5 8 13 ..
        int len = 0;
        int maxLen = INT_MIN;
        if(nums.size() < 3) return nums.size();
        for(int i=2;i<nums.size();i++){
            int f = nums[i-2], e = nums[i-1];
            if(f + e == nums[i]) len++;
            else {maxLen = max(maxLen, len+2);len = 0;}
        }
        maxLen = max(maxLen, len+2);
        return maxLen;
    }
};