class Solution {
public:
    int singleNumber(vector<int>& nums) 
    {
        //sort(nums.begin(),nums.end());
        int i,ans,j,c;
        for(i=0;i<nums.size();i++)
        {
          c=0;
            for(j=0;j<nums.size();j++)
            {
                if(nums[i]==nums[j])
                {
                    c++;
                }
            }
            if(c==1) 
            {
                ans=nums[i];
                break;
                
            }
        }
        return ans;
    }
};