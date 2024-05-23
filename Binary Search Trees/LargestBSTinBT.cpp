/*
    Following is Binary Tree Node structure:
    class TreeNode
    {
    public:
        int data; // Data stored in the node
        TreeNode *left, *right; // Pointers to left and right children
        TreeNode() : data(0), left(NULL), right(NULL) {} // Default constructor
        TreeNode(int x) : data(x), left(NULL), right(NULL) {} // Constructor with data
        TreeNode(int x, TreeNode *left, TreeNode *right) : data(x), left(left), right(right) {} // Constructor with data and children
    };
*/

class info{
public:
    int maxi; // Maximum value in the subtree
    int mini; // Minimum value in the subtree
    bool isBST; // Indicates if the subtree is a BST
    int size; // Size of the subtree
};

info solve(TreeNode *root, int &ans) {
    // base case
    if (root == NULL) {
        return {INT_MIN, INT_MAX, true, 0}; // Return default values for an empty subtree
    }

    // recursively solve for left and right subtrees
    info left = solve(root->left, ans); // Recursively solve for the left subtree
    info right = solve(root->right, ans); // Recursively solve for the right subtree

    info currNode; // Create an info object for the current node
    currNode.size = left.size + right.size + 1; // Calculate the size of the current subtree
    currNode.maxi = max(root->data, right.maxi); // Update the maximum value in the current subtree
    currNode.mini = min(root->data, left.mini); // Update the minimum value in the current subtree

    // check if the current subtree is a BST
    if (left.isBST && right.isBST && (root->data > left.maxi && root->data < right.mini)) {
        currNode.isBST = true; // Mark the current subtree as a BST
    } else {
        currNode.isBST = false; // Mark the current subtree as not a BST
    }

    // update the maximum size of BST found
    if (currNode.isBST) {
        ans = max(ans, currNode.size); // Update the answer if the current BST is larger
    }

    return currNode; // Return the info object for the current node
}

int largestBST(TreeNode *root) {
    int maxSize = 0; // Initialize the maximum size of BST to 0
    info temp = solve(root, maxSize); // Call the solve function on the root node
    return maxSize; // Return the size of the largest BST
}
