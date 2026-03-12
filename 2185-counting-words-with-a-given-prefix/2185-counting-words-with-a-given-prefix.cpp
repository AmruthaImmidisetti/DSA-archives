class Solution {
public:
    int prefixCount(vector<string>& words, string pref) {
        int count = 0;
        for(int i = 0; i < words.size(); i++) {
            if(words[i].length() >= pref.length()) {
                string sub = words[i].substr(0, pref.length());
                if(sub == pref) {
                    count++;
                }
            }
        }
        return count;
    }
};