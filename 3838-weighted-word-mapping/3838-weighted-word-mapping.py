class Solution:
    def mapWordWeights(self, words: List[str], weights: List[int]) -> str:
        newStr = ""
        for i in range(len(words)):
            s = words[i]
            total = 0
            for j in range(len(s)):
                total += weights[ord(s[j]) - ord('a')]
            ind = total % 26
            newStr += chr(ord('a') + (25 - ind))
        return newStr
