class Solution {
public:
    int dominantIndices(vector<int>& nums) {
        int n = nums.size(), cnt = 0;
        vector<int>suff(n);
        suff[n-1] = nums[n-1];
        for(int i=n-2;i>=0;i--) {
            suff[i] = nums[i] + suff[i+1];
        }
        for(int i=0;i<nums.size()-1;i++) {
            int avg = suff[i+1]/(n-i-1);
            if(nums[i] > avg) cnt++;
        }
        return cnt;
    }
};