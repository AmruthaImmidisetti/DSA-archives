class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int ans=nums[0];
        int res=0;
        for(int i=0;i<nums.size();i++){
            if(res<0) {res=0;}
            res+=nums[i];
            ans = max(ans,res);
        }
        return ans;
    }
};