class Solution {
public:
    bool checkOnesSegment(string s) {
        int oneC = count(s.begin(), s.end(), '1');
        int zeroC = (int)s.size() - oneC;
        if(oneC == s.size()) return true;
        if(s[s.size()-1] == '0') {
            reverse(s.begin(), s.end());
            string newS = s.substr(0,zeroC);
            int cnt = count(newS.begin(), newS.end(), '1');
            if(cnt == 0) return true;
        }
        return false;
    }
};