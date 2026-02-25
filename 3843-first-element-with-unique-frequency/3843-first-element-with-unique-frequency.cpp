class Solution {
public:
    int firstUniqueFreq(vector<int>& nums) {
        map<int, int>mp1;
        for(int i=0;i<nums.size();i++) {
            mp1[nums[i]]++;
        }
        map<int, int>mp2;
        for(auto const pair : mp1) {
            mp2[pair.second]++;
        }

        for(int i=0;i<nums.size();i++) {
            if(mp2[mp1[nums[i]]] == 1) return nums[i];
        }
        return -1;
    }
};