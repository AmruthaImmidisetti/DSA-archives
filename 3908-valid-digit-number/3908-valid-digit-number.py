class Solution:
    def validDigit(self, n: int, x: int) -> bool:
        newStr = str(n)
        if (str(x) in newStr) and (newStr[0] != str(x)):
            return True
        else:
            return False