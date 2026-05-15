class Solution {
public:
    bool isGood(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int maxi = nums.size()-1;
        if(count(nums.begin(), nums.end(), maxi) <= 1 || nums[0] != 1) return false;
        for(int i=0;i<nums.size()-2;i++) {
            if(nums[i+1] - nums[i] != 1) return false;
        }
        return true;
    }
};