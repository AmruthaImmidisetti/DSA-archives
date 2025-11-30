class Solution {
public:
    int maxDistinct(string s) {
        set<char>ss(s.begin(), s.end());
        return ss.size();
    }
};