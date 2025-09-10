class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        set<vector<int>>SET;
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() ; i++){
            for(int j = i + 1 ; j < nums.size() ; j++){
                int k = j + 1, l = nums.size()-1;
                while(k < l){
                    long long subArray = (long long)nums[i] + nums[j] + nums[k] + nums[l];
                    if(subArray == target) 
                        {SET.insert({nums[i], nums[j], nums[k], nums[l]});k++;l--;}
                    else if(subArray < target) 
                         k++;
                    else 
                        l--;
                }
            }
        }
        vector<vector<int>>ans(SET.begin(), SET.end());
        return ans;
    }
};