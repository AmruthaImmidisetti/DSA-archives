class Solution {
public:
    int minRotations(string s) {
        int dial = 0;
        int total = 0;
        for (char n : s) {
            int curr = n - '0';
            if (curr == dial) {
                continue;
            } else {
                total += min(((curr - dial) + 10) % 10, ((dial - curr) + 10) % 10);
                dial = curr;
            }
        }
        return total;
    }
};