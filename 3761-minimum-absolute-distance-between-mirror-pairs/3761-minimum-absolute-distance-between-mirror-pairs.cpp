class Solution {
    int revInt(int x){
        int r = 0;
        while(x > 0){
            r=r*10+(x%10);
            x=x/10;
        }
        return r;
    }
public:
    int minMirrorPairDistance(vector<int>& nums) {
        unordered_map<int,int>mp;
        int ans = INT_MAX;
        for(int i=0;i<nums.size();i++){
            auto it = mp.find(nums[i]);
            if(it!=mp.end()){
                ans = min(ans, i - it->second);
            }
            int rev =  revInt(nums[i]);
            mp[rev]=i;
        }
        return (ans == INT_MAX)?-1:ans;
    }
};