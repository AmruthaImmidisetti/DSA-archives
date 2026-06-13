class Solution {
public:
    bool check(int a, int b, int c, int d, int e, int f) {
        // top left diagonal
        if (e < c && f < d) {
            int i = c, j = d, Queen = 0, rook = 0;
            while (i > 0 && j > 0) {
                if (i == e && j == f)
                    Queen = 1;
                if (i == a && j == b)
                    rook = 1;
                i--;
                j--;
            }
            if (Queen == 1 && rook == 0)
                return true;
            if ((Queen == 0 && rook == 0) || (Queen == 0))
                return false;
            if (Queen && rook) {
                if (a > e && b > f && a < c && b < d)
                    return false;
                else
                    return true;
            }
        }
        // top right diagonal
        if (e < c && f > d) {
            int i = c, j = d, Queen = 0, rook = 0;
            while (i > 0 && j > 0 && j < 9 && i < 9) {
                if (i == e && j == f)
                    Queen = 1;
                if (i == a && j == b)
                    rook = 1;
                i--;
                j++;
            }
            if (Queen == 1 && rook == 0)
                return true;
            if ((Queen == 0 && rook == 0) || (Queen == 0))
                return false;
            if (Queen && rook) {
                if (a > e && b < f && a < c && b > d)
                    return false;
                else
                    return true;
            }
        }
        // bottom left diagonal
        if (e > c && f < d) {
            int i = c, j = d, Queen = 0, rook = 0;
            while (i > 0 && j > 0 && i < 9 && j < 9) {
                if (i == e && j == f)
                    Queen = 1;
                if (i == a && j == b)
                    rook = 1;
                i++;
                j--;
            }
            if (Queen == 1 && rook == 0)
                return true;
            if ((Queen == 0 && rook == 0) || (Queen == 0))
                return false;
            if (Queen && rook) {
                if (a < e && b > f && a > c && b < d)
                    return false;
                else
                    return true;
            }
        }
        //bottom right diagonal
        if (e > c && f > d) {
            int i = c, j = d, Queen = 0, rook = 0;
            while (i > 0 && j > 0 && i < 9 && j < 9) {
                if (i == e && j == f)
                    Queen = 1;
                if (i == a && j == b)
                    rook = 1;
                i++;
                j++;
            }
            if (Queen == 1 && rook == 0)
                return true;
            if ((Queen == 0 && rook == 0) || (Queen == 0))
                return false;
            if (Queen && rook) {
                if (a < e && b < f && a > c && b > d)
                    return false;
                else
                    return true;
            }
        }
        return false;
    }
    int minMovesToCaptureTheQueen(int a, int b, int c, int d, int e, int f) {
        if ((a == e && c != a) || (b == f && d != b)) return 1;
        if ((a == e && c == a) || (b == f && d == b)) {
           if((a == e && c == a) && ((d > b && d < f) || (d > f && d < b))) return 2;
           if((b == f && d == b) && ((c > a && c < e) || (c > e && c < a))) return 2;
           else return 1;
        }
        else {
            if (((c + d) % 2 == 0 && (e + f) % 2 == 0) ||
                ((c + d) % 2 == 1 && (e + f) % 2 == 1)) {
                if (check(a, b, c, d, e, f)) {
                    return 1;
                }
            } else
                return 2;
        }
        return 2;
    }
};