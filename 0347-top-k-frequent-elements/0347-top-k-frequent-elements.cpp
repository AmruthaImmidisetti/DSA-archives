class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int,int>frq;
        for(int ele:nums){
            frq[ele]++;
        }
        priority_queue<pair<int,int>>pq;
        for(auto const &q:frq){
            pq.push({q.second,q.first});
        }
        vector<int>ans;
        while(!pq.empty() && k!=0){
            auto const pair=pq.top();
            ans.push_back(pair.second);
            pq.pop();
            k--;
        }
        return ans;
    }
};