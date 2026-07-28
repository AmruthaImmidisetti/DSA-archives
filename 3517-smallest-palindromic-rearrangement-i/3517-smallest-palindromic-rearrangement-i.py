class Solution:
    def smallestPalindrome(self, s: str) -> str:
        n = len(s)
        st = ''.join(sorted(s[:n // 2]))
        if n % 2 == 0:
            return st + st[::-1]
        else:
            return st + s[n // 2] + st[::-1]