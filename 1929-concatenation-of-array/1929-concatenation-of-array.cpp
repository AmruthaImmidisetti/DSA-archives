class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int>arr(nums.begin(),nums.end());
        arr.insert(arr.end(), nums.begin(), nums.end());
        return arr;
    }
};