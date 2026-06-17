# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def subtree(self, root):
        if not root:
            return 0
        left = self.subtree(root.left)
        right = self.subtree(root.right)
        if left != right or left == -1 or right == -1:
            return -1
        total = left + right + 1
        self.lst.append(total)
        return total

    def kthLargestPerfectSubtree(self, root: Optional[TreeNode], k: int) -> int:
        self.lst = []
        self.subtree(root)
        self.lst.sort(reverse = True)
        print(self.lst)
        if k > len(self.lst):
            return -1
        return self.lst[k-1]
