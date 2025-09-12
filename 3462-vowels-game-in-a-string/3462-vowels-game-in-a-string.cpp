class Solution {
public:
    bool doesAliceWin(string s) {
        int cnt = 0;
        for(int i = 0 ; i < s.size() ; i++){
            if(s[i] == 'a' or s[i] == 'e' or s[i] == 'i' or s[i] == 'o' or s[i] == 'u') cnt++;
        }
       if(cnt == 0) return false;
       return true;
    }
};