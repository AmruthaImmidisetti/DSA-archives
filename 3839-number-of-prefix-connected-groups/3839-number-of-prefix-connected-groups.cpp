class Solution {
public:
    int prefixConnected(vector<string>& words, int k) {
        map<string, int> mp;
        for (int i = 0; i < words.size(); i++) {
            if(words[i].size() < k) continue;
           string newSub = words[i].substr(0, k);
            mp[newSub]++;
        }
        int cnt = 0;
        for(auto const ele : mp) {
            if(ele.second > 1) cnt++;
        }
        return cnt;
    }
};