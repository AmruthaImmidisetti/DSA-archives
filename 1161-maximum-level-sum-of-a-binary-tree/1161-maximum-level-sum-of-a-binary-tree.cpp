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
    int maxLevelSum(TreeNode* root) {
        int maxi = INT_MIN, level = 0, cnt = 0;
        queue<TreeNode*> q;
        q.push(root);

        while (!q.empty()) {
            int k = q.size();
            vector<int> Level;

            for (int i = 0; i < k; i++) {
                TreeNode* curr = q.front();
                q.pop();
                Level.push_back(curr->val);
                if (curr->left) {
                    q.push(curr->left);
                }
                if (curr->right) {
                    q.push(curr->right);
                }
            }

            int Sum = accumulate(Level.begin(), Level.end(), 0);
            Level.clear();
            cnt += 1;
            if(Sum > maxi) {
                maxi = Sum;
                level = cnt;
            }
        }
        return level;
    }
};