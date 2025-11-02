class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int minE = nums[0];
        int maxE = nums[nums.size()-1];
        vector<int>arr;
        for(int i = minE; i<=maxE;i++){
            if(!count(nums.begin(), nums.end(), i)) arr.push_back(i);
        }
        return arr;
    }
};