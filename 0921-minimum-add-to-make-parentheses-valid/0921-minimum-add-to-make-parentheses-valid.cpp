class Solution {
public:
    int minAddToMakeValid(string s) {
        stack<char>st;
        int add  = 0;
        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '(') {
                st.push(s[i]);
            } else if(s[i] == ')') {
                if(!st.empty()) st.pop();
                else add++;
            }
        }
        return (int)st.size() + add;
    }
};