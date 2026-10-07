class Solution {
public:
    int scoreOfParentheses(string s) {
        stack<int> st;
        st.push(0);
        for (char c : s) {
            if (c == '(') {
                st.push(0);
            } else {
                int x = st.top();
                st.pop();
                st.top() += max(1, x * 2);
            }
        }
        return st.top();
    }
};