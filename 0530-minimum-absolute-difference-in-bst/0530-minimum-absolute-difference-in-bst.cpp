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
    void order(TreeNode* root){
        if(root==nullptr)  return;
        else{
            order(root->left);
            mini.push_back(root->val);
            order(root->right);
        }
    }
public:
    vector<int>mini;
    int getMinimumDifference(TreeNode* root) {
        order(root);
        sort(mini.begin(),mini.end());
        vector<int>hii;
        for(int i=1;i<mini.size();i++){
            hii.push_back(mini[i]-mini[i-1]);
        }
        sort(hii.begin(),hii.end());
        return hii[0];
    }
};