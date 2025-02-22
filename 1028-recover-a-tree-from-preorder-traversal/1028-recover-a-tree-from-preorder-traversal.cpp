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
    TreeNode* recoverFromPreorder(string traversal) {
        vector<TreeNode*> stack;
        for (int i = 0, level, val; i < S.length();) {
            // Count dashes for level
            for (level = 0; S[i] == '-'; i++)
                level++;
            
            // Parse the node value
            for (val = 0; i < S.length() && S[i] != '-'; i++)
                val = val * 10 + S[i] - '0';
            
            // Create new node
            TreeNode* node = new TreeNode(val);
    }
};