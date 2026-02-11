class Solution {
public:
    int findDuplicate(vector<int>& nums) 
    {
        sort(nums.begin(),nums.end());
    long long int k=0,i;
    for(i=0;i<nums.size();i++)
    {
        if(nums[i]==nums[i+1])
        {
            k=nums[i];
            break;
        }
    }
    return k;
    }
};