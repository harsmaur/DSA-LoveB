void inorder(BinaryTreeNode* root , vector<int> & ans){
	if(root == NULL){
		return;
	}

	inorder(root->left, ans);
	ans.push_back(root->data);
	inorder(root->right, ans);

}


BinaryTreeNode* fillPreorder(BinaryTreeNode* root, vector<int> &inorderAns, int &index){
       //base case
	   if(root == NULL){
		   return NULL;
	   }

	   //NLR preorder
	   root->data = inorderAns[index++]; 
	   fillPreorder(root->left,  inorderAns, index);
	   fillPreorder(root->right,  inorderAns, index);

	   return root;
}
BinaryTreeNode* convertBST(BinaryTreeNode* root)
{
     vector<int> ans;
	 inorder(root, ans);

    int index = 0;
	 fillPreorder(root,  ans, index);
	 return root;

	
	
}