class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int n=nums.size();
        vector<int>p(n+1,0);
        for(int i=0;i<n;i++){
              p[i + 1] = p[i] + nums[i];
        }
        int mm = INT_MAX;

        for (int i = l; i <= r; ++i) { 
            for (int j = 0; j <= n - i; ++j) { 
                int sum = 0;
                for (int k = j; k < j + i; ++k) {
                    sum += nums[k];
                }
                if (sum > 0) {
                    mm = min(mm, sum);
                }
            }
        }

        return mm == INT_MAX ? -1 : mm;

    }
};