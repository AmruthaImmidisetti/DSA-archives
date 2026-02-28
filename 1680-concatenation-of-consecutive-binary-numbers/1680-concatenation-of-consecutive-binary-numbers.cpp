class Solution {
public:
    int concatenatedBinary(int n) {
        const int MOD = 1e9 + 7;
        long long result = 0;

        for (int i = 1; i <= n; i++) {
            int bitLength = 32 - __builtin_clz(i);  
            result = ((result << bitLength) + i) % MOD;
        }

        return result;
    }
};