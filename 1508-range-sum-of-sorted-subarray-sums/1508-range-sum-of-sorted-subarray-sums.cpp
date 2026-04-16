class Solution {
public:
    int rangeSum(vector<int>& nums, int n, int left, int right) {
        vector<int> ans;
        long long int sum;
        const int mod = 1e9 + 7;
        for(int i=0;i<n;i++)
        {
            sum=0;
            for(int j=i;j<n;j++)
            {
                sum=sum+nums[j];
                ans.push_back(sum%mod);
            }
        }
       long long  sums=0;
        sort(ans.begin(),ans.end());
        for(int i=left-1;i<right;++i)
        {
            sums=(sums+ans[i])%mod;
        }
        
        return sums;
    }
};