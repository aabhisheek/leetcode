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
    vector<int> inorderTraversal(TreeNode* root) {
         // Initialize a stack to track nodes
    stack<TreeNode*> st;
    // Start from the root node
    TreeNode* node = root;
    // Initialize a vector to store
    // inorder traversal result
    vector<int> inorder;

    // Start an infinite
    // loop for traversal
    while(true){
        // If the current node is not NULL
        if(node != NULL){
            // Push the current
            // node to the stack
            st.push(node);
            // Move to the left child
            // of the current node
            node = node->left;
        }
        else{
            // If the stack is empty,
            // break the loop
            if(st.empty()){
                break;
            }
            // Retrieve a node from the stack
            node = st.top();
            // Remove the node from the stack
            st.pop();
            // Add the node's value to
            // the inorder traversal list
            inorder.push_back(node->val);
            // Move to the right child
            // of the current node
            node = node->right;
        }
    }
    // Return the inorder
    // traversal result
    return inorder;

        
    }
};