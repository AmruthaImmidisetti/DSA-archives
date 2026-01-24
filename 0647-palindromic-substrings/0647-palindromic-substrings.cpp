class Solution {
public:
    int countSubstrings(string s) {
        int subs = 0;

        for (int i = 0; i < s.size(); i++) {
            for (int j = i; j < s.size(); j++) {
                string newS = s.substr(i, j - i + 1);

                string revS = newS;
                reverse(revS.begin(), revS.end());

                if (newS == revS)
                    subs++;
            }
        }
        return subs;
    }
};
