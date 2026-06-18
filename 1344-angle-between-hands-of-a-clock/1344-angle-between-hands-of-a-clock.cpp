class Solution {
public:
    double angleClock(int hour, int minutes) {
        double diff = abs((30*(hour % 12) + 0.5*minutes) - (6.0 * minutes));
        return min(diff, 360.0 - diff);
    }
};