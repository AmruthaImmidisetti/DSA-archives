class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        int cnt = 0;
        int n = nums.size();
        for (int i = 1; i < n; i++) {
            nums[i] += nums[i - 1];
        }

        unordered_map<int,int> mpp;
        mpp[0] = 1; 

        for (int i = 0; i < n; i++) {
            int x = nums[i];
            int need = x - k;
            if (mpp.find(need) != mpp.end()) {
                cnt += mpp[need];
            }
            mpp[x]++; 
        }

        return cnt; 
    }
};
