class Solution {
public:
    vector<int> processQueries(vector<int>& queries, int m) {
        vector<int> arr;
        for (int i = 1; i <= m; i++) {
            arr.push_back(i);
        }
        vector<int> res;
        for (int i = 0; i < queries.size(); i++) {
            int ele = queries[i];
            int index = find(arr.begin(), arr.end(), ele) - arr.begin();
            res.push_back(index);

            arr.erase(arr.begin() + index);
            arr.insert(arr.begin(), ele);
        }
        return res;
    }
};