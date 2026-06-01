class Solution:
    def minimumCost(self, cost: List[int]) -> int:
        cost.sort(reverse=True)
        totSum = sum(cost)
        i=2
        j=len(cost)
        while i < j:
            totSum -= cost[i]
            i+=3
        return totSum
