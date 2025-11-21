class Solution {
public:
    int majorityElement(vector<int>& nums) {
        /*int n = nums.size();
        sort(nums.begin(), nums.end());
        if (nums[0] == nums[nums.size() - 1]) {
            return nums[0];
        }
        long long int max = 0, c, k;
        for (int i = 0; i < nums.size(); i++) {
            int c = 0;
            for (int j = i; j < nums.size(); j++) {
                if (nums[i] == nums[j]) {
                    c++;
                }
            }
            if (c > max) {
                max = c;
                k = nums[i];
            }
        }
        return k;*/
        int major=nums[0];
        int occ=1;
        for(int i=0;i<nums.size();i++)
        {
        if(major!=nums[i])
        {
            occ--;
        }
        else    occ++;
        if(occ==0)
        {
            major=nums[i];
            occ=1;
        }
        }
        return major;
    }
};