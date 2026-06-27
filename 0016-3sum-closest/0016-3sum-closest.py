class Solution:
    def threeSumClosest(self, nums: List[int], target: int) -> int:
        nums.sort()
        num = nums[0] + nums[1] + nums[2]
        for i in range(len(nums) - 2):
            j = i + 1
            k = len(nums) - 1
            while j < k:
                Sum = nums[i] + nums[j] + nums[k]
                if abs(Sum - target) < abs(num - target):
                    num = Sum
                if Sum < target:
                    j += 1
                elif Sum > target:
                    k -= 1
                else:
                    return target

        return num

