class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int>arr;
        for(int i=0;i<nums.size();i++){
            if(nums[i]<pivot) arr.push_back(nums[i]);
        }
        int cnt=count(nums.begin(),nums.end(),pivot);
        for(int i=0;i<cnt;i++){
            arr.push_back(pivot);
        }
        for(int i=0;i<nums.size();i++){
            if(nums[i]>pivot) arr.push_back(nums[i]);
        }
        return arr;
    }
};