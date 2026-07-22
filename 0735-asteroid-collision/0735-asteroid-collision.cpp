class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        vector<int> ans;
        stack<int> st;
        for (int i = 0; i < asteroids.size(); i++) {
            int f = 0;
            while (!st.empty() && asteroids[i] < 0 && st.top() > 0) {
                if (st.top() < (asteroids[i] * -1)) {
                    st.pop();
                    continue;
                } else if (st.top() == (asteroids[i] * -1)) {
                    st.pop();
                }
                f = 1;
                break;
            }
            if (f == 0) {
                st.push(asteroids[i]);
            }
        }
        while (!st.empty()) {
            ans.push_back(st.top());
            st.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};