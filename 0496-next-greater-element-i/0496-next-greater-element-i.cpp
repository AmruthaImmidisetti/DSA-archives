class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        vector<int>arr(nums1.size(), 0);
        int k = 0;
        for (int i = 0; i < nums1.size(); i++) {
            int f = 0;
            auto it = find(nums2.begin(), nums2.end(), nums1[i]);
            for (int j = it - nums2.begin(); j < nums2.size(); j++) {
                if(nums1[i] < nums2[j]) {
                    f = 1;
                    arr[i] = nums2[j];
                    break;
                }
            }
            if(!f) arr[i] = -1;
        }
        return arr;
    }
};