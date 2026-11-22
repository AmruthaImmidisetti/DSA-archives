class Solution {
public:
    bool checkString(string s) {
        int aCnt = count(s.begin(), s.end(), 'a');
        if(aCnt == s.size()) return true;
        int cnt  = 0;
        for(int i = 0; i < s.size() - 1; i++) {
            if(s[i] == 'a') {
                cnt++;
            } else {
                break;
            }
        }
        if(cnt == aCnt) return true;
        return false;
    }
};