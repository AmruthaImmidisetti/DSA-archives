class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        dic = {}
        for i in range(len(nums)):
            rem = target - nums[i]
            if rem in dic and dic[rem] !=i:
                return [i,dic[rem]]
            dic[nums[i]] = i
        return []