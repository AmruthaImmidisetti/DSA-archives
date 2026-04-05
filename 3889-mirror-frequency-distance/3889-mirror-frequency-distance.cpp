class Solution {
public:
    int mirrorFrequency(string s) {
        map<char, int>mp;
        for(int i=0;i<s.size();i++) {
            mp[s[i]]++;
        }
        int Sum = 0;
        for(char i='a'; i<='z';i++) {
            char m = 'z' - (i - 'a');
            if(i< m) {
                Sum += abs(mp[i] - mp[m]);
            }
        }
        for(char i='0'; i<='9';i++) {
            char m = '9' - (i - '0');
            if(i < m) {
                Sum += abs(mp[i] - mp[m]);
            }
        }
        return Sum;
    }
};