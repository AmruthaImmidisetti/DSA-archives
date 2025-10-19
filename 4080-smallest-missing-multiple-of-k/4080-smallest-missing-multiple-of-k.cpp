class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int maxMul = INT_MIN;
        int Mul = 0, c = 1;
        for(int i = 0; i < nums.size(); i++){
            int cnt = count(nums.begin(), nums.end(), k * c);
            if(cnt == 0)  return k * c;
            c++;

            if(nums[i] % k == 0) Mul = nums[i];
            maxMul = max(maxMul, Mul);
        }
        return maxMul + k;
    }
};