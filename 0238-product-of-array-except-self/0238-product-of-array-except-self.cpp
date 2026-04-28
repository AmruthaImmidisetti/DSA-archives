class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int>p(nums.size(),1),s(nums.size(),1),res(nums.size(),1);
        for(int i=1;i<nums.size();i++) p[i]=p[i-1]*nums[i-1];
        for(int i=nums.size()-2;i>=0;i--) s[i]=s[i+1]*nums[i+1];
        for(int i=0;i<nums.size();i++) res[i]=p[i]*s[i];
        return res;
    }
};