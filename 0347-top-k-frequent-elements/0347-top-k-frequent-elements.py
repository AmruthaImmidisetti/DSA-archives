class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        freq = {}
        for ele in nums:
            freq[ele] = freq.get(ele, 0) + 1

        sorted_freq = dict(
            sorted(freq.items(), key=lambda x: x[1], reverse=True)
        )

        res = []
        c = 0

        for ele in sorted_freq:
            if c == k:
                break

            res.append(ele)
            c += 1

        return res