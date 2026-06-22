# Definition for a binary tree node.
# class TreeNode:
#     def __init__(self, val=0, left=None, right=None):
#         self.val = val
#         self.left = left
#         self.right = right
class Solution:
    def traverse(self, root, Stri):
        if root is None:
            return Stri + ',#'
            
        Stri += ',' + str(root.val) 
        Stri = self.traverse(root.left, Stri)
        Stri = self.traverse(root.right, Stri)
        return Stri
    def isSubtree(self, root: Optional[TreeNode], subRoot: Optional[TreeNode]) -> bool:
        r = self.traverse(root, "")
        sr = self.traverse(subRoot, "")
        return sr in r
        