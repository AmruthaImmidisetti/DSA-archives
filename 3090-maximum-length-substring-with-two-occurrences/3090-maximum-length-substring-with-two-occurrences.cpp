class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxLen = INT_MIN;
        for (int i = 0; i < s.size(); i++) {
            map<char, int> mp;
            int len = 0;
            for (int j = i; j < s.size(); j++) {
                mp[s[j]]++;
                if(mp[s[j]] > 2) 
                    break;
                len++;
            }
            mp.clear();
            maxLen = max(maxLen, len);
        }
        return maxLen;
    }
};