class Solution:
    def maxIceCream(self, costs: List[int], coins: int) -> int:
        costs.sort()
        cnt = 0
        for i in range(len(costs)):
            if costs[i] > coins:
                break
            elif coins > 0:
                coins -= costs[i]
                cnt += 1
        return cnt
            