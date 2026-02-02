class Solution {
public:
    string reverseByType(string s) {
        vector<char> l;
        vector<char> sp;
        for (char c : s) {
            if (c >= 'a' && c <= 'z')
                l.push_back(c);
            else
                sp.push_back(c);
        }
        reverse(l.begin(), l.end());
        reverse(sp.begin(), sp.end());
        int j = 0, k = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                s[i] = l[j++];
            } else {
                s[i] = sp[k++];
            }
        }
        return s;
    }
};