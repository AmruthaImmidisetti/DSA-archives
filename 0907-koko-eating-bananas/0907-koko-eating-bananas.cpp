class Solution {
public:
    long long fun(vector<int>& piles, int mid) {
        long long sum = 0;
        for (int i = 0; i < piles.size(); i++) {
            sum += ((long long)piles[i] + mid - 1) / mid;
        }
        return sum;
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxi = *max_element(piles.begin(), piles.end());
        int low = 1, high = maxi;
        int minHours = maxi;
        while (low <= high) {
            int mid = low + (high - low)/2;
            long long digi = fun(piles, mid);
            if (digi <= h) {
                minHours = min(minHours, mid);
                high = mid - 1;
            } else if (digi > h) {
                low = mid + 1;
            }
        }
        return minHours;
    }
};