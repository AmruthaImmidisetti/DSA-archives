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
      void tra(TreeNode* root,int l,int h){
        if(root!=NULL) {
        if(root->val >=l && root->val<=h){
            res.push_back(root->val);
        }
        tra(root->left,l,h);
        tra(root->right,l,h);
        }
    
}
public:
    int rangeSumBST(TreeNode* root, int low, int high) {
        int sum=0;
        tra(root,low,high);
       for(int i=0;i<res.size();i++){
        sum+=res[i];
       }
       return sum;
    }
};