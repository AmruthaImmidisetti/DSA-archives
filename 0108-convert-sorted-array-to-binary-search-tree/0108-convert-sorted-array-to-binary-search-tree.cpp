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
    TreeNode* root=NULL;
    TreeNode* CreateNode(int data){
        TreeNode* newnode=new TreeNode(data);
        return newnode;
    }
    TreeNode* bst(int low,int high,vector<int>& nums){
       if(low>high) return nullptr;
        if(low==high){
           return  CreateNode(nums[low]);
        }
        int mid=(low+high)/2;
        TreeNode* root=CreateNode(nums[mid]);
        root->left=bst(low,mid-1,nums);
        root->right=bst(mid+1,high,nums);
        return root;
   }
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
       return  bst(0,nums.size()-1,nums);
    }
};