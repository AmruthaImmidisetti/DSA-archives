class Solution:
    def rearrangeArray(self, nums: List[int]) -> List[int]:
        posArray = []
        negArray = []
        for ele in nums:
            if ele > 0:
                posArray.append(ele)
            else :
                negArray.append(ele)
        j = 0
        k = 0
        for i in range(len(nums)):
            if i % 2 == 0:
                nums[i] = posArray[j]
                j += 1
            else :
                nums[i] = negArray[k]
                k += 1
        return nums
