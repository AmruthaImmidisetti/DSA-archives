class Solution {
public:
    bool isPalindromic(string s) {
        string newS = "";
        for(char ch : s) {
            int curr = (unsigned char)ch;
            for(int j = 7; j >= 0; j--) {
                newS += ((curr >> j) & 1)+'0';
            }
        }
        string s2 = newS;
        reverse(s2.begin(), s2.end());
        return s2 == newS;
    }
};