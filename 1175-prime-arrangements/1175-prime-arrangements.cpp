class Solution {
public:
    long long MOD = 1e9 + 7;
    long long fact(int ele) {
        long long tot = 1;
        for (int i = 2; i <= ele; i++) {
            tot = (tot * i) % MOD;
        }
        return tot;
    }
    int numPrimeArrangements(int n) {
        vector<bool> primes(n + 1, true);
        primes[0] = false;
        primes[1] = false;
        for (int i = 2; i * i <= n; i++) {
            if (primes[i]) {
                for (int j = i * i; j <= n; j += i)
                    primes[j] = false;
            }
        }
        int primeCnt = 0;
        for (int i = 0; i <= n; i++)
            if (primes[i])
                primeCnt++;
        int nonPrimes = n - primeCnt;
        int permutations = (fact(primeCnt) * fact(nonPrimes)) % MOD;
        return permutations;
    }
};