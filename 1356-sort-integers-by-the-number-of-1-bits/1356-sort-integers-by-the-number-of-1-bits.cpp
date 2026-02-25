class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        priority_queue<pair<int,int>,vector<pair<int,int>>,greater<pair<int,int>>>Q;
        for(int i=0;i<arr.size();i++){
            int p=__builtin_popcount(arr[i]);
            Q.push({p,arr[i]});
        }
        vector<int> result;
        while (!Q.empty()) {
        result.push_back(Q.top().second);
        Q.pop();
       }
       return result;
    }
};