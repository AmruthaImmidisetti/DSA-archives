/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    int count = 0;
    int findDominantNodes(TreeNode* root) {
        if(root == nullptr) return INT_MIN;
        int left = findDominantNodes(root->left);
        int right = findDominantNodes(root->right);
       
       int maxi = max(max(left , right) , root->val);
        if(root->val == maxi) count++;
        return maxi;
    }
    int countDominantNodes(TreeNode* root) {
        findDominantNodes(root);
        return count;
    }
};