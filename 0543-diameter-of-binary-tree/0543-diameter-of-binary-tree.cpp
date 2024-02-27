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
    int height(TreeNode* root){
        //
        if(!root) return 0;

        int hLeft = height(root -> left);
        int hRight = height(root -> right);

        int height = max(hLeft, hRight) + 1;
        return height;
    }
    int diameterOfBinaryTree(TreeNode* root) {
        if(!root) return 0;

        int d1 = diameterOfBinaryTree(root -> left);
        int d2 = diameterOfBinaryTree(root -> right);
        int d3 = height(root -> right) + height(root -> left);

        int ans = max(d1, max(d2, d3));
        return ans;
    }
};