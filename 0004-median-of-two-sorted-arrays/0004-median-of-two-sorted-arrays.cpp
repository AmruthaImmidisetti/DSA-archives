class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) 
    {
        vector<int>ans;
        for(int i=0;i<nums1.size();i++)
        {
            ans.push_back(nums1[i]);
        }
         for(int i=0;i<nums2.size();i++)
        {
            ans.push_back(nums2[i]);
        }
        sort(ans.begin(),ans.end());
        int y=ans.size();
        float mid=(0+y)/2;
        float res;
       if(y%2!=0)
       {
          res=(float)ans[mid];
       }
       else 
       {
         float w=(float)ans[mid-1];
         float e=(float)ans[mid];
          res=(w+e)/2;
       }
       return res;
    }
};