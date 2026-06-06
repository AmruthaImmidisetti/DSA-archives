class Solution:
    def checkInclusion(self, s1: str, s2: str) -> bool:
        Len = (len(s2) - len(s1)+1)
        str1 = ''.join(sorted(s1))
        start = 0
        while start <= Len:
            newStri = ''.join(sorted(s2[start:start+len(s1)]))
            if str1 == newStri:
                return True
            start += 1
        return False
