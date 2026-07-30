class Solution:
    def minimumPushes(self, word: str) -> int:
        l = len(word)
        div = l // 8
        rem = l % 8
        i = 1
        ans = 0
        if div == 0 :
             return l
        else:
            while(div != 0):
                ans += 8*i
                i += 1
                div -= 1
        ans += i * rem
        return ans