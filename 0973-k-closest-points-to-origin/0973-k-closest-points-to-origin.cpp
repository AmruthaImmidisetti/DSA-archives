class Solution {
public:
    vector<vector<int>> kClosest(vector<vector<int>>& points, int k) {
        vector<vector<int>> vec;
        priority_queue <pair<double, vector<int>>,
            vector <pair<double, vector<int>>>,
            greater<pair<double, vector<int>>>> pq;

        for (int i = 0; i < points.size(); i++) {
            int f = points[i][0];
            int l = points[i][1];
            vector<int> arr(points[i].begin(), points[i].end());
            double dist = sqrt((f * f) + (l * l));
           pq.push({dist, arr});
        }
        int c = 0;
        while (!pq.empty() && c < k) {
            auto TOP = pq.top();
            pq.pop();
            vec.push_back(TOP.second);
            c++;
        }
        return vec;
    }
};