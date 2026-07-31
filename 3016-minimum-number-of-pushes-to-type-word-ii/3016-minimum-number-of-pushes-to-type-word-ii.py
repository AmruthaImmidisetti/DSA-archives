class Solution:
    def minimumPushes(self, word: str) -> int:
        d = {}
        for ch in word:
            d[ch] = d.get(ch, 0) + 1
        d = dict(sorted(d.items(), key = lambda x: x[1], reverse = True))
        l = len(d)
        i = 1
        ans = 0
        e = 0
        for ch, v in d.items():
            if e == 8:
                i += 1
                e = 0
            ans += i * v
            e += 1
        return ans