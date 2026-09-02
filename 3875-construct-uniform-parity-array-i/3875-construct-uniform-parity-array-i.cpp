class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        int even =0, odd = 0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2 == 0) even++;
            else odd++;
        }
         if(odd == nums1.size() || even == nums1.size()) return true;
         else if(odd == 1 && even == 0) return false;
         else return true;
    }
};