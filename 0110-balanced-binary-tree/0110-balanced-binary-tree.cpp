/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
vector<int>arr;
    int Depth(TreeNode* root) {
        if (!root)
            return 0;
        else {
            int left = Depth(root->left) + 1;
            int right = Depth(root->right) + 1;

            // if (abs(left - right) > 1)
            //     return false;
            // else
            arr.push_back(abs(left-right));
            return max(left, right);
        }
        // return true;
    }
    bool isBalanced(TreeNode* root) {
        if (!root)
            return true;
        Depth(root);
        if(count(arr.begin(), arr.end(), 1) + count(arr.begin(), arr.end(), 0) == arr.size()) return true;
        return false;
    }
};