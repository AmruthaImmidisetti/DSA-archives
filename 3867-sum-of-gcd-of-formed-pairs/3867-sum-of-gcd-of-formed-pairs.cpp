class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        vector<int>pre(nums.size());
        vector<int>mx(nums.size());

        mx[0] = nums[0];
        for(int i=1;i<nums.size();i++) {
            mx[i] = max(mx[i-1], nums[i]);
        }

        for(int i=0;i<mx.size();i++) {
            pre[i] = gcd(mx[i] ,nums[i]);
        }
        sort(pre.begin(), pre.end());
        int l=0, h=(int)pre.size()-1;
        long long Sum = 0;
        while(l<h) {
            Sum = Sum + gcd(pre[l], pre[h]);
            l++;
            h--;
        }
        return Sum;
    }
};