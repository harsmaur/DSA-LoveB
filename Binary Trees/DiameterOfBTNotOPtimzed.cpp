class Solution {
  public:
    // Function to return the diameter of a Binary Tree.
    int height(Node* root){
        if(root == NULL){
            return 0;
        }
        int left = height(root->left);
        int right = height(root->right);
        int ans = max(left, right) +1;
        return ans;
    }
    int diameter(Node* root) {
      if(root == NULL){
          return 0;
      }
      
      //option 1
      int option1 = diameter(root->left);
      int option2 = diameter(root->right);
      int option3 = (height(root->left) + 1 + height(root->right));
      int ans = max(option1, max(option2, option3));
      return ans;
    }

    // O(n2) tc -> tle 