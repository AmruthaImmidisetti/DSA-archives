class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        int n=nums.size()/2;
        map<int,int>mp;
        for(int i=0;i<nums.size();i++){
            mp[nums[i]]++;
        }
        int ans;
        for(auto pair:mp){
            if(pair.second==n) {
                ans=pair.first;
                break;
            }
        }
        return ans;
    }
};