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
    int sum = 0;
    TreeNode* bstToGst(TreeNode* root) {
        if (!root) return nullptr;

        // Traverse right subtree first
        bstToGst(root->right);

        // Update current node value
        root->val += sum;
        sum = root->val;

        // Traverse left subtree
        bstToGst(root->left);

        return root;
    }
};