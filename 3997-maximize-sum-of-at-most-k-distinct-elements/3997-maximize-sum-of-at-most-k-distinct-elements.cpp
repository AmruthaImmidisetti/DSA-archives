class Solution {
public:
    vector<int> maxKDistinct(vector<int>& nums, int k) {
        set<int>st(nums.begin(),nums.end());
        vector<int>arr(st.begin(), st.end());
        sort(arr.rbegin(),arr.rend());
        vector<int>brr;
        for(int i=0;i< min((int)arr.size(),k);i++) brr.push_back(arr[i]);
        return brr;
    }
};