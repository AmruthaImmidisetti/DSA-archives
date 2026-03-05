class Solution {
public:
    string maximumXor(string s, string t) {
        string ans = "";
        int oneC = count(t.begin(), t.end(), '1');
        int zeroC = (int)s.size() - oneC;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '1') {
                if (zeroC > 0) {
                    ans += '0';
                    zeroC--;
                } else if (zeroC == 0) {
                    if (oneC > 0) {
                        ans += '1';
                        oneC--;
                    }
                }
            } else if (s[i] == '0') {
                if (oneC > 0) {
                    ans += '1';
                    oneC--;
                } else if (oneC == 0) {
                    if (zeroC > 0) {
                        ans += '0';
                        zeroC--;
                    }
                }
            }
        }
        string res = "";
        for(int i=0;i<s.size();i++) {
            if((s[i] == '0' && ans[i] == '1') || (s[i] == '1' && ans[i] == '0')) {
                res += '1';
            }
            else res +='0';
        }
        return res;
    }
};