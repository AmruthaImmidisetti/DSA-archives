class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> st;
        string newStr = "";
        for (char ch : s) {
            if (ch == '(') {
                if (st.empty()) {
                    st.push(ch);
                } else {
                    if (st.size() >= 1) {
                        st.push(ch);
                        newStr += ch;
                    }
                }
            } else {
                if (!st.empty() && st.top() == '(') {
                    if (st.size() == 1) {
                        st.pop();
                        continue;
                    } else {
                        st.pop();
                        newStr += ch;
                    }
                }
            }
        }
        return newStr;
    }
};