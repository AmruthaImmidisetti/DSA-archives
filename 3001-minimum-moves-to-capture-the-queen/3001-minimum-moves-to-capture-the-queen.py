class Solution:
    def minMovesToCaptureTheQueen(self, a: int, b: int, c: int, d: int, e: int, f: int) -> int:
        if a == e or b == f:
            if (a == e and a == c) and ((d - b) * (d - f) < 0):
                return 2
            if (b == f and b == d) and ((c - a) * (c - e) < 0):
                return 2
            else:
                return 1
        
        if abs(c - e) == abs(d - f):
            if abs(a - c) == abs(d - b) and abs(a - e) == abs(b - f) and ((b - f) * (b - d) < 0):
                return 2
            else:
                return 1
        
        return 2

