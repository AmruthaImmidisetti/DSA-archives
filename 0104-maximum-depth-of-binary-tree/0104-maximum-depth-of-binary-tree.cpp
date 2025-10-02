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
    int depth(TreeNode* root){
        if(root==NULL) return 0;
        else{
            int left=depth(root->left)+1;
            int right=depth(root->right)+1;

            return max(left,right);
        }
    }
public:
    int maxDepth(TreeNode* root) {
       return  depth(root);
    }
};