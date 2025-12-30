class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        map<char, int> mp;
        int maxi = 0;
        int i = 0, j = 0;
        while (j < s.size()) {
            if (!mp.count(s[j])) {
                mp[s[j]]++;
                j++;
                maxi = max(maxi, j - i);
            } else {
                mp[s[i]]--;
                if (mp[s[i]] == 0)
                    mp.erase(s[i]);
                i++;
            }
        }
        return maxi;
    }
};