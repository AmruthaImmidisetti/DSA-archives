class Solution:
    def arrayRankTransform(self, arr: List[int]) -> List[int]:
        lst = arr.copy()
        s = sorted(set(arr))
        print(s)
        d = {}
        r = 1
        for rank in s:
            d[rank] = r
            r += 1
        for i in range(len(lst)):
            lst[i] = d[lst[i]]
        return lst
            