class Solution {
public:
    int numberOfSpecialChars(string word) {
        map<char, int> mp;
        map<char, int>mp2;
        int cnt = 0;
        for (int i = 0; i < word.size(); i++) {
            if ((word[i] >= 'a' && word[i] <= 'z')) {
                mp[word[i]]= i;
            }
        }
        for (int i = 0; i < word.size(); i++) {
            if ((word[i] >= 'A' && word[i] <= 'Z') &&
                mp2.find(word[i]) == mp2.end()) {
                mp2[word[i]]=i;
            }
        }
        for (auto const ch : mp) {
           char c = ch.first;
           int ind = ch.second;
           if(ind < mp2[c-32]) cnt++;
        }
        return cnt;
    }
};