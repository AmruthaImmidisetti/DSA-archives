class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        map<string, string>mp;
        for(int i = 0 ; i < knowledge.size(); i++) {
            mp[knowledge[i][0]] = knowledge[i][1];
        }
        string ss = "";
        string res = "";
        for(int i = 0; i < s.size();) {
            if(s[i] == '(') {
                string ss = "";
                for(int j = i + 1; j < s.size(); j++) {
                    if(s[j] == ')') {
                        i = j;
                        break;
                    }
                    ss += s[j];
                }
                if(mp.find(ss) != mp.end())
                    res += mp[ss];
                else 
                    res += '?';
            } else {
                if(s[i] != '(' && s[i] != ')') {
                    res += s[i];
                }
                i++;
            }
        }
        return res;
    }
};