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
    // vector<int>answer;
    
    // vector<int> preorderTraversal(TreeNode* root) {
    //     if(root != NULL){
    //         answer.push_back(root -> val);
    //         preorderTraversal(root -> left);
    //         preorderTraversal(root -> right);
    //     }
    //     return answer;
    // }
    
    // vector<int> preorderTraversal(TreeNode* root) {
    //     vector<int> nodes;
    //     preorder(root, nodes);
    //     return nodes;
    // }
// private:
    // void preorder(TreeNode* root, vector<int>& nodes) {
    //     if (!root) {
    //         return;
    //     }
    //     nodes.push_back(root -> val);
    //     preorder(root -> left, nodes);
    //     preorder(root -> right, nodes);
    // }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int>arr;
        if(root == NULL) return arr;

        stack<TreeNode*>st;
        st.push(root);

        while(!st.empty()){
            root = st.top();
            st.pop();
            arr.push_back(root->val);

            if(root -> right != NULL) st.push(root -> right);
            if(root -> left != NULL) st.push(root -> left);
        }
        return arr;
    }
};