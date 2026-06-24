# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def findDiameter(self, root, diameter):
        if root is None:
            return 0
        left = self.findDiameter(root.left, diameter)
        right = self.findDiameter(root.right, diameter)
        diameter[0] = max(diameter[0], left + right)
        return 1 + max(left, right)

    def diameterOfBinaryTree(self, root: Optional[TreeNode]) -> int:
        diameter = [0]
        self.findDiameter(root, diameter)
        return diameter[0]