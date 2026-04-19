class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        vector<int>fr(nums.begin(), nums.end());
        int maxi = nums[0];
        for(int i=0;i<nums.size();i++) {
            maxi = max(fr[i], maxi);
            fr[i] = maxi;
        }
        int mini = nums[nums.size()-1];
        for(int i=nums.size()-1;i>=0;i--) {
           mini = min(nums[i], mini);
           nums[i] = mini;
        }
        int j = nums.size()-1;
        for(int i=0;i<nums.size();i++) {
            int score = fr[i] - nums[i];
            if(score <= k) {
                return i;
            }
            j--;
        }
        return -1;
    }
};