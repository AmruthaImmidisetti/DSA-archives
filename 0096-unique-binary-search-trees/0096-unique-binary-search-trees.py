class Solution:
    def numTrees(self, n: int) -> int:
        tree = [1] * (n + 1)
        for nd in range(2, n + 1):
            tot = 0
            for root in range(1, nd + 1):
                tot += tree[root - 1] * tree[nd - root]
            tree[nd] = tot
        
        return tree[n]