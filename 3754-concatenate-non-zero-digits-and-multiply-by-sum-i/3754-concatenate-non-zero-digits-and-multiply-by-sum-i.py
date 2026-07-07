class Solution:
    def sumAndMultiply(self, n: int) -> int:
        s = str(n)
        s = s.replace("0", "")
        if s == "":
            return 0
        num = int(s)
        Summ = (sum(int(digit) for digit in s))
        return num*Summ