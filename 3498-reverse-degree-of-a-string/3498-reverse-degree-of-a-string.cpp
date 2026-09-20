class Solution {
public:
    int reverseDegree(string s) {
        int Sum = 0;
        for(int i = 0; i < s.size(); i++) {
            int asci = 26 - ((int)s[i] - 'a');
            Sum += (asci * (i + 1));
        }
        return Sum;
    }
};