class Solution {
public:
    int nextGreaterElement(int n) {
        string s = to_string(n);
        if (next_permutation(s.begin(), s.end())) {
            return stol(s) > INT_MAX ? -1 : stol(s);
        }
        return -1;
    }
};