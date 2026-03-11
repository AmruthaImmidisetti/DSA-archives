class Solution {
public:
    int bitwiseComplement(int n) {
        if(n==0) return 1;
        int t = n;
        int res = 0, p = 0;
        while(t > 0) {
            int r = t%2;
            if(r == 0) res += pow(2,p);
            t = t/2;
            p+=1;
        }
        return res;
    }
};