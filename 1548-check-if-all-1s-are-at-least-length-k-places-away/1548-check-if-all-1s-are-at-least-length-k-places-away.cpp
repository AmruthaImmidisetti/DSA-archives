class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        int f = -1;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==1){
                if(f!=-1) {
                    if(i-f-1 < k) return false;
                }
                f=i;
            }
        }
        return true;
    }
};