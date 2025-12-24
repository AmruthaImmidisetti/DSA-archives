class Solution {
public:
    int minimumBoxes(vector<int>& apple, vector<int>& capacity) {
        int appleSum = accumulate(apple.begin(), apple.end(), 0);

        int res = 0;
        sort(capacity.rbegin(), capacity.rend());
        for (int i = 0; i < capacity.size(); i++) {
            res+=capacity[i];
            if(res >= appleSum) return i+1;
        }
        return capacity.size();
    }
};