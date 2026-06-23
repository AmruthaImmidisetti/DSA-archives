# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def rightSideView(self, root: Optional[TreeNode]) -> List[int]:
        if root is None:
            return []
        rightsNodes = []
        dq = deque()
        dq.append(root)
        while dq:
            rightsNodes.append(dq[-1].val)
            for ele in range(len(dq)):
                curr = dq[0]
                dq.popleft()
                if curr.left:
                    dq.append(curr.left)
                if curr.right:
                    dq.append(curr.right)
        return rightsNodes
