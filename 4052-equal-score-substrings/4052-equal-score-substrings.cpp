class Solution {
public:
    bool scoreBalance(string s) {
        vector<int> p(s.size() + 1, 0);
        for (int i = 0; i < s.size(); i++) {
            p[i + 1] = p[i] + (s[i] - 'a' + 1);
        }
        for (int i = 1; i < s.size(); i++) {
            if ((p[s.size()] - p[i]) == p[i])
                return true;
        }
        return false;
    }
};