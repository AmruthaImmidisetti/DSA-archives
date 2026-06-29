class Solution:
    def numOfStrings(self, patterns: List[str], word: str) -> int:
        cnt = 0
        for stri in patterns:
            if stri in word:
                cnt += 1
        return cnt