class Solution {
public:
    string reorganizeString(string s) {
        unordered_map<char, int> mp;
        for(char c : s) {
            mp[c]++;
        }
        priority_queue<pair<int, char>> pq;
        for(auto it : mp) {
            pq.push({it.second, it.first});
        }
        string result = "";

        while(pq.size() > 1) {
            auto first = pq.top(); pq.pop();
            auto second = pq.top(); pq.pop();

            result += first.second;
            result += second.second;

            first.first--;
            second.first--;

            if(first.first > 0) pq.push(first);
            if(second.first > 0) pq.push(second);
        }
        if(!pq.empty()) {
            if(pq.top().first > 1) return "";
            result += pq.top().second;
        }

        return result;
    }
};