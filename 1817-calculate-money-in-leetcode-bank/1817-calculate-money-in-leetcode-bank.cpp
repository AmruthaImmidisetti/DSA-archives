class Solution {
public:
    int totalMoney(int n) {
        int div = n / 7;
        int mod = n % 7;
        int j = 7, sum = 0;
        int c = 0;
        for (int i = div; i >= 1; i--) {
            sum += (j * (j + 1)) / 2;
            sum -= (c * (c + 1)) / 2;
            c++;
            j++;
        }
        sum += (mod * (2 * div + mod + 1)) / 2;
        return sum;
    }
};
