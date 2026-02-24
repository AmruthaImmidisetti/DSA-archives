class Solution {
public:
    int fact(int num) {
        if(num <= 1) return 1;
        else return num*fact(num-1);
    }
    bool isDigitorialPermutation(int n) {
        int t = n;
        string newS = to_string(n);
        sort(newS.begin(), newS.end());
        int Sum = 0;
        while(t > 0) {
            int lastDig = t%10;
            Sum += fact(lastDig);
            t=t/10;
        }
        string SumS = to_string(Sum);
        sort(SumS.begin(), SumS.end());
        return  SumS == newS;
    }
};