class Solution:
    def hasAllCodes(self, s: str, k: int) -> bool:
        freq = {}
        i = 0
        while i < len(s) - k + 1:
            newStr = s[i:i+k]
            freq[newStr] = freq.get(newStr, 0) + 1
            i += 1
        print(freq)
        if len(freq) == math.pow(2, k):
            return True
        else :
            return False
