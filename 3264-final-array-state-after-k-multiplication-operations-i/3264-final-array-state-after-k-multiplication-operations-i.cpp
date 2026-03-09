class Solution {
public:
    vector<int> getFinalState(vector<int>& nums, int k, int multiplier) {
        for(int i=1;i<=k;i++){
            int min=INT_MAX,as=0;
            for(int j=0;j<nums.size();j++){
                if(nums[j]<min) {
                   min=nums[j];
                   as=j;
                }
            }
            nums[as]=nums[as]*multiplier;
        }
        return nums;
    }
};