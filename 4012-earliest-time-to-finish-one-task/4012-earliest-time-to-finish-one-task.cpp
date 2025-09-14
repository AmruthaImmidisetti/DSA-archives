class Solution {
public:
    int earliestTime(vector<vector<int>>& tasks) {
        int minSum = INT_MAX;
        for(int i=0;i<tasks.size();i++){
            minSum = min(tasks[i][0] + tasks[i][1], minSum);
        }
        return minSum;
    }
};