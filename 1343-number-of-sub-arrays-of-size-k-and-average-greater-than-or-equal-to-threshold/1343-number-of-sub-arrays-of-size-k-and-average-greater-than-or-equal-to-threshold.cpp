class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int subArrays = 0;
        int windSum = accumulate(arr.begin(), arr.begin() + k, 0);
        int windAvg = windSum / k;
        if (windAvg >= threshold)
            subArrays++;
        for (int i = k; i < arr.size(); i++) {
            windSum = windSum - arr[i - k] + arr[i];
            int avg = windSum / k;
            if (avg >= threshold)
                subArrays++;
        }
        return subArrays;
    }
};