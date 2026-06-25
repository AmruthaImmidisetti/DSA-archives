class Solution:
    def countMajoritySubarrays(self, nums: List[int], target: int) -> int:
        totSubarrays = 0
        dict = {}
        for i in range(0, len(nums)):
            dict.clear()
            for j in range(i, len(nums)):
                dict[nums[j]] = dict.get(nums[j], 0) + 1
                if dict.get(target, 0) > (j - i + 1)/2:
                    totSubarrays += 1
        return totSubarrays
