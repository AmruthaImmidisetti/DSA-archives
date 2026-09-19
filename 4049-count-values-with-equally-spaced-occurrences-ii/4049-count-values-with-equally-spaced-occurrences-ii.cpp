class Solution {
public:
    int countSpecialIntegers(vector<int>& nums) {
        map<int, vector<int>>mp;
        for(int i = 0; i < nums.size(); i++) {
            mp[nums[i]].push_back(i);
        }
        int cnt = 0;
        for(auto const &[k, arr] : mp) {
            if(arr.size() < 3){
                continue;
            }
            int dist = arr[1] - arr[0];
            bool f = 1;
            for(int i = 2; i < arr.size(); i++) {
                if(arr[i] - arr[i-1] != dist) {
                    f = 0;
                    break;
                }
            }
            if(f) {
                cnt++;
            }
        }
        return cnt;
    }
};