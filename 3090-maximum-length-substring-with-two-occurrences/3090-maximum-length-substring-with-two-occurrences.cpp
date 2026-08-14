class Solution {
public:
    int maximumLengthSubstring(string s) {
        int maxLen = INT_MIN;
        map<char, int> mp;
        int l = 0;
        for (int r = 0; r < s.size(); r++) {
            mp[s[r]]++;
            if (mp[s[r]] > 2) {
                while (mp[s[r]] > 2) {
                    mp[s[l]]--;
                    if (mp[s[l]] == 0)
                        mp.erase(s[l]);
                    l++;
                }
            }
            maxLen = max(maxLen, r - l + 1);
        }
        return maxLen;
    }
};