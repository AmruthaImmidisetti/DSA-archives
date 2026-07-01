class Solution:
    def countVowels(self, word: str) -> int:
        ans = 0
        n = len(word)
        for i, ch in enumerate(word):
            if ch in "aeiou":
                ans += (i + 1) * (n - i)
        return ans