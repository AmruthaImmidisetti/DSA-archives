class Solution {
public:
    long long countCommas(long long n) {
        long long cnt = 0;
        if(n >= 1000) cnt +=(min(n, (long long)1e6-1)-999)*1;
        if(n >= 1e6) cnt+=(min(n, (long long)1e9-1) - 999999)*2;
        if(n >= 1e9) cnt+=(min(n, (long long)1e12-1)-999999999)*3;
        if(n >= 1e12) cnt+=(min(n, (long long)(1e15-1))-999999999999)*4;
        if(n >= 1e15) cnt += (n - 999999999999999LL)*5;
        return cnt;
    }
};