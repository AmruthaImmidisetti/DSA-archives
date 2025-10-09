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
    vector<int>res;
   void  traversal(TreeNode* root){
       if(root!=nullptr){
        traversal(root->left);
        res.push_back(root->val);
        traversal(root->right);
        }
    }
public:
    bool isValidBST(TreeNode* root) {
        traversal(root);
        for(int i=0;i<res.size();i++){
            cout<<res[i]<<" ";
        }
        for(int i=0;i<res.size()-1;i++){
            if(res[i]>=res[i+1]){
               return false;
            }
        }
       return true;
    }
};