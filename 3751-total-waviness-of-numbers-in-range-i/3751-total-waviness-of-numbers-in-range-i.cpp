class Solution {
public:
    int findWave(int n) {
        string s = to_string(n);
        int cnt = 0;
        for(int i=1;i<s.size()-1;i++) {
            if(s[i] > s[i-1] && s[i] > s[i+1]) cnt++;
            else if(s[i] < s[i-1] && s[i] < s[i+1]) cnt++;
        }
        return cnt;
    }
    int totalWaviness(int num1, int num2) {
        int findWaveCnt = 0;
        for(int i=num1;i<=num2;i++) {
            if(log10(i)+1 >= 3) findWaveCnt += findWave(i);
        }
        return findWaveCnt;
    }
};