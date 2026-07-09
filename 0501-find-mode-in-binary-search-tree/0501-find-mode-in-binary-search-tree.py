# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def inOrder(self, root, mp):
        if root is None:
            return

        self.inOrder(root.left, mp)
        mp[root.val] = mp.get(root.val, 0) + 1
        self.inOrder(root.right, mp)

    def findMode(self, root):
        mp = {}
        self.inOrder(root, mp)
        maxi = max(mp.values())
        return [key for key, val in mp.items() if val == maxi]