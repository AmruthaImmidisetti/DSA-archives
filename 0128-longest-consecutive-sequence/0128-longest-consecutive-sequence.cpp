class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size()==0) return 0;
        sort(nums.begin(),nums.end());
        nums.erase(unique(nums.begin(),nums.end()),nums.end());
        int cnt=1, maxi=0;
        for(int i=0;i<nums.size()-1;i++){
            if(nums[i]+1 == nums[i+1]) cnt+=1;
            else {maxi = max(maxi,cnt);cnt=1;};
        }
        maxi= max(maxi,cnt);
        return maxi;
    }
};