//Function to return a list containing elements of left view of the binary tree.

 void solve(Node*root, vector<int> &ans, int level){
     
     //base case
     if(root==NULL){
         return;
     }
     //we entered a new level
     if(level == ans.size()){
         ans.push_back(root->data);
     }
     
     solve(root->left, ans, level+1);
     solve(root->right, ans, level+1);
     
 }
 
 
vector<int> leftView(Node *root)
{
  vector<int> ans;
  int lvl = 0;
  solve(root, ans, lvl);
  return ans;
}