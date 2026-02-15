class Solution {
public:
    string addBinary(string a, string b) {
        string res = "";

        int n = abs((int)a.size() - (int)b.size());
        if(a.size() < b.size()) {
            a = string(n,'0') + a;
        }
        else if(b.size() < a.size()) {
            b = string(n,'0') + b;
        }

        int carry = 0;
        for(int i = a.size()-1; i >= 0; i--) {
            int curr = (a[i]-'0') + (b[i]-'0') + carry;

            res += char(curr%2 + '0');
            carry = curr/2;
        }

        if(carry) res += '1';

        reverse(res.begin(), res.end());
        return res;
    }
};