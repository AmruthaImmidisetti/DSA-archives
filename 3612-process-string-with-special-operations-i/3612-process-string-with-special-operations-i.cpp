class Solution {
public:
    string processStr(string s) {
        string newy = "";
        bool f = false;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] >= 'a' && s[i] <= 'z') {
                newy += s[i];
                f = true;
            } else if (s[i] == '%')
                reverse(newy.begin(), newy.end());
            else if (s[i] == '*' && newy.size() >= 1)
                newy.pop_back();
            else if (s[i] == '#')
                newy = newy + newy;
        }
        return newy;
    }
};