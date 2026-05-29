class Solution {
public:
    int minElement(vector<int>& nums) {
        vector<int>res;
        for(int i=0;i<nums.size();i++){
            int q=nums[i];
            int sum=0,r=0;
            while(q>0){
                int r=q%10;
                sum=sum+r;
                q=q/10;
            }
            res.push_back(sum);
        }
        sort(res.begin(),res.end());
        return res[0];
    }
};