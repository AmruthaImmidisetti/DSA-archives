class Solution {
public:
    string longestPalindrome(string s) {
        vector<vector<bool>> dp(s.size(), vector<bool>(s.size(), false));
        string ans = "";
        int len = 1;
        int i = 0, I = s.size() - 1, J = 0;
        while (len <= s.size()) {
            int i = 0;
            for (int j = J; j < s.size(); j++) {
                if (i == j && len == 1)
                    dp[j][j] = true;
                else if (s[i] == s[j]) {
                    if (i < j && (dp[i + 1][j - 1] || j - i == 1)) {
                        dp[i][j] = true;
                        ans = s.substr(i,j-i+1);
                    }
                }
                i++;
            }
            I--;
            J++;
            len++;
        }
        return (ans != "") ? ans : string(1, s[0]);
    }
};