class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        string res = "";
        if (num == 1 && floor(log10(sum)) + 1 == 1)
            return to_string(sum);
        int div = sum / 9;
        if (div > 0) {
            res.append(div, '9');
        } 
        if(sum % 9 != 0) res += to_string(sum % 9);
        cout<<res<<" ";
        if (res.size() < num)
            res.append(num - res.size(), '0');
        return (res.size() == num) ? res : "";
    }
};