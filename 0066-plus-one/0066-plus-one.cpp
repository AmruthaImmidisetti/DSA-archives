class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        reverse(digits.begin(), digits.end());
        int carry = 1;
        for (int i = 0; i < digits.size(); i++) {
            int num = digits[i] + carry;
            if(num > 9) {
                digits[i] = 0;
                carry = 1;
            }
            else {
                digits[i] = num;
                carry = 0;
                break;
            }
        }
        if(carry == 1) digits.push_back(1);
        reverse(digits.begin(), digits.end());
        return digits;
    }
};