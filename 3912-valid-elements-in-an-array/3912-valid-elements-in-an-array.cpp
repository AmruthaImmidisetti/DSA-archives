class Solution {
public:
    vector<int> findValidElements(vector<int>& nums) {
        vector<int>vec;
        vector<int>leftMaxArr;
        int maxi = nums[0];
        for(int i=0;i<nums.size();i++) {
            maxi = max(maxi, nums[i]);
            leftMaxArr.push_back(maxi);
        }
        vector<int>rigMaxArr;
        int maxii = nums[nums.size()-1];
        for(int i=nums.size()-1;i>=0;i--) {
            maxii = max(maxii, nums[i]);
            rigMaxArr.push_back(maxii);
        }
        reverse(rigMaxArr.begin(), rigMaxArr.end());
        for(int i=0;i<nums.size();i++) {
            if(i==0 || i==nums.size()-1) vec.push_back(nums[i]);
            else {
                if(nums[i] > leftMaxArr[i-1]) vec.push_back(nums[i]);
                else if(nums[i] > rigMaxArr[i+1]) vec.push_back(nums[i]);
            }
        }
        return vec;
    }
};