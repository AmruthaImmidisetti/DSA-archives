class Solution {
public:
    int numberOfSpecialChars(string word) {
        sort(word.begin(), word.end());
        word.erase(unique(word.begin(), word.end()), word.end());
        map<char, int>mp;
        int cnt = 0;
        for(int i=0;i<word.size();i++) {
            if(word[i] >= 'A' && word[i] <= 'Z') mp[word[i]]++;
            else {
                if(mp[word[i]-32] > 0) cnt++;
            }
        }
        return cnt;
    }
};