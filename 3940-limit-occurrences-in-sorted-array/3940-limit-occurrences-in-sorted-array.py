class Solution:
    def limitOccurrences(self, nums: list[int], k: int) -> list[int]:
        lst = []
        i, j = 0, len(nums) - 1
        while i <= j:
            NumCnt = nums.count(nums[i])
            if(NumCnt > k):
                lst.extend([nums[i]]*k)
            if(NumCnt <= k):
                lst.extend([nums[i]]*NumCnt)
            i += NumCnt
        return lst