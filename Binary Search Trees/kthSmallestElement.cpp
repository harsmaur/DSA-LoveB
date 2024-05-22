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
    // Helper function to perform in-order traversal and find the k-th smallest element
    int solve(TreeNode* root, int &i, int k){
        // Base case: if the node is null, return -1 indicating not found
        if(root == NULL){
            return -1;
        }
        
        // Recursively traverse the left subtree (L)
        int left = solve(root->left, i, k);
        // If the left subtree returns a valid value (i.e., k-th smallest is found), return it
        if(left != -1){
            return left;
        }

        // Process the current node (N)
        i++; // Increment the counter for visited nodes
        // If the current node is the k-th smallest, return its value
        if(i == k){
            return root->val;
        }

        // Recursively traverse the right subtree (R)
        return solve(root->right, i, k);
    }
public:
    // Main function to find the k-th smallest element in the BST
    int kthSmallest(TreeNode* root, int k) {
        int i = 0; // Initialize the counter for visited nodes
        int ans = solve(root, i, k); // Call the helper function
        return ans; // Return the k-th smallest element
    }
};
