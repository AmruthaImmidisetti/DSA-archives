class Solution {
public:
    int minPairSum(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int j = nums.size()-1, maxi = INT_MIN;
        for(int i=0;i<nums.size()/2;i++){
            maxi = max(maxi, nums[i]+nums[j]);
            cout<<nums[i]+nums[j]<<" ";
            j--;
        }
        return maxi;
    }
};