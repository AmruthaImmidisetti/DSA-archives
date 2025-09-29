class Solution {
    static bool comp(const string &a, const string &b){
        if(a.size() != b.size()) return a.size() > b.size();
        return a > b;
    }
public:
    string kthLargestNumber(vector<string>& nums, int k) {
        sort(nums.begin(), nums.end(),comp);
        return nums[k-1];
    }
};