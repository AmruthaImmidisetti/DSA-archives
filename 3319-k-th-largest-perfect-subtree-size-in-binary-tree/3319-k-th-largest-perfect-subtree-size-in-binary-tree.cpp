/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right)
 *         : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    vector<int> ans;
    int dfs(TreeNode* root) {
        if (!root)
            return 0;

        int leftHeight = dfs(root->left);
        int rightHeight = dfs(root->right);

        if (leftHeight == -1 || rightHeight == -1 ||
            leftHeight != rightHeight)
            return -1;
        int currHeight = leftHeight + 1;

        // 2^height - 1
        int size = (1 << currHeight) - 1;
        ans.push_back(size);

        return currHeight;
    }

    int kthLargestPerfectSubtree(TreeNode* root, int k) {
        ans.clear();

        dfs(root);

        sort(ans.begin(), ans.end(), greater<int>());

        if (ans.size() < k)
            return -1;

        return ans[k - 1];
    }
};