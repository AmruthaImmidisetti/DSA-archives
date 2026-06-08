from collections import deque
class Solution:
    def maxSlidingWindow(self, nums: List[int], k: int) -> List[int]:
        res = []
        dq = deque()
        for i in range(0, len(nums)):
            while len(dq) != 0 and nums[dq[-1]] < nums[i]:
                dq.pop()
            dq.append(i)

            while len(dq) != 0 and dq[0] <= (i - k):
                dq.popleft()

            if i >= k - 1:
                res.append(nums[dq[0]])
        return res
