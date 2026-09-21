class Solution {
public:
    string mapping[10] = {"", "",  "abc",  "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
    vector<string> strs;
    void solve(int ind, string &curr, string digits) {
        if(ind == digits.size()) {
            strs.push_back(curr);
            return;
        }
        string str = mapping[digits[ind] - '0'];
        for(char ch: str) {
            curr += ch;
            solve(ind + 1, curr, digits);
            curr.pop_back();
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.empty()) {
            return {};
        }
        string curr = "";
        solve(0, curr, digits);
        return strs;
    }
};