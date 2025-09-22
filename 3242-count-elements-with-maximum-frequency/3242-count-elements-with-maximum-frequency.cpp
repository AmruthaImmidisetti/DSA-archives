class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        vector<pair<int,int>>arr(mp.begin(),mp.end());
        sort(arr.begin(),arr.end(),[](auto &a, auto &b){
            return a.second > b.second;
        });
        int maxi = INT_MIN;
        int cnt =0;
        for(auto const & ele : arr){
         maxi = max(ele.second, maxi);
            if(ele.second == maxi) cnt += ele.second;
        }
        return cnt;
    }
};