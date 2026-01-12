class Solution {
public:
    int centeredSubarrays(vector<int>& nums) {
        int CenteredSubs = 0;
        for (int i = 0; i < nums.size(); i++) {
            unordered_map<int, int> mp;
            int Sum = 0;
            for (int j = i; j < nums.size(); j++) {
                mp[nums[j]]++;
                Sum += nums[j];
                if (mp.count(Sum))
                    CenteredSubs++;
            }
        }
        return CenteredSubs;
    }
};