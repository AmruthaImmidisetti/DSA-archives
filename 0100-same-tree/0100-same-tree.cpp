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
    void  Same(TreeNode* p, TreeNode* q){
        if(p==NULL && q==NULL) return;
        if(p==NULL || q==NULL) {
            a=false;
            return;
        }
        if(p->val!=q->val){
            a=false;
            return;
        }
       Same(p->left,q->left);
       Same(p->right,q->right);
    }
public:
 bool a=true;
    bool isSameTree(TreeNode* p, TreeNode* q) {
        Same(p,q);
        return a;
    }
};