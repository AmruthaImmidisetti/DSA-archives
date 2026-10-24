class Solution {
public:
    int countDaysTogether(string arriveAlice, string leaveAlice, string arriveBob, string leaveBob) {
        vector<int> days = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        auto convert = [&](string date) {
            int totaldays = 0;
            int month = stoi(date.substr(0,2));
            int day = stoi(date.substr(3, 2));

            for(int i = 0; i < month - 1; i++) {
                totaldays += days[i];
            }
            totaldays += day;
            return totaldays;
        };
        int s1 = convert(arriveAlice);
        int e1 = convert(leaveAlice);
        int s2 = convert(arriveBob);
        int e2 = convert(leaveBob);

        return max(0, min(e1, e2) - max(s1, s2) + 1);
    }
};