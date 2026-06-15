# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def reverseOddLevels(self, root: Optional[TreeNode]) -> Optional[TreeNode]:
        dq = deque([root])
        level = 0
        while dq:
            reserved = True
            qSize = len(dq)
            for i in range(0, qSize):

                if level % 2 == 1 and reserved:
                    l = 0
                    r = qSize - 1
                    reserved = False
                    while(l < r):
                        dq[l].val, dq[r].val = dq[r].val, dq[l].val
                        l += 1
                        r -= 1

                curr = dq[0]
                dq.popleft()
                if curr.left:
                    dq.append(curr.left)
                if curr.right:
                    dq.append(curr.right)

            level += 1
        return root