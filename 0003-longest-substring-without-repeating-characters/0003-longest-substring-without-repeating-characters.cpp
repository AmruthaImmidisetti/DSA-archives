class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if (s.empty())
            return 0;
        vector<int> freq(256, 0);
        int longRepSubstr = 0;
        string subStr = "";

        for (int i = 0; i < s.size(); i++) {
            if (freq[s[i]] == 0) {
                freq[s[i]]++;
                subStr += s[i];
            } 
            else {
                auto it = find(subStr.begin(), subStr.end(), s[i]);
                int ind = it - subStr.begin();
                for (int j = 0; j <= ind; j++) {
                    freq[subStr[j]]--;
                }

                string newSubStr(subStr.begin() + ind + 1, subStr.end());
                subStr = newSubStr;
                subStr += s[i];
                freq[s[i]]++;
            }

            longRepSubstr = max(longRepSubstr, (int)subStr.size());
        }

        return longRepSubstr;
    }
};