class Solution:
    def leftRightDifference(self, nums: List[int]) -> List[int]:
        leftSum = []
        rightSum = []
        leftSum.append(0)
        for i in range(len(nums)-1):
            leftSum.append(leftSum[i] + nums[i])
        nums.reverse()
        rightSum.append(0)
        for i in range(len(nums)-1):
            rightSum.append(rightSum[i] + nums[i])
        rightSum.reverse()
        answer = []
        for i in range(len(nums)):
            answer.append(abs(leftSum[i] - rightSum[i]))
        print(leftSum)
        print(rightSum)
        return answer