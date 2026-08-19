class Solution {
public:
    int maxNumberOfFamilies(int n, vector<vector<int>>& reservedSeats) {
        int sz = reservedSeats.size();
        unordered_map<int, vector<int>> mp;
        for (int i = 0; i < sz; i++) {
            int row = reservedSeats[i][0];
            int seat = reservedSeats[i][1];
            if (mp.find(row) == mp.end()) {
                mp[row] = vector<int>(11, 0);
            }
            mp[row][seat] = 1;
        }
        int grp = 2 * n;
        for (auto& i : mp) {
            vector<int> arr = i.second;
            int count1 = count(arr.begin() + 2, arr.begin() + 6, 1);
            int count2 = count(arr.begin() + 4, arr.begin() + 8, 1);
            int count3 = count(arr.begin() + 6, arr.begin() + 10, 1);
            if (count1 == 0 && count3 == 0) {

            } else if (count1 == 0 || count2 == 0 || count3 == 0) {
                grp--;
            } else {
                grp -= 2;
            }
        }
        return grp;
    }
};