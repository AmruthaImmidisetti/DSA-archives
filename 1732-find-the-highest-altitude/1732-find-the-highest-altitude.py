class Solution:
    def largestAltitude(self, gain: List[int]) -> int:
        maxi = 0
        res = 0
        for ele in gain:
            maxi = max(maxi, res + ele)
            res = res + ele
        return maxi
