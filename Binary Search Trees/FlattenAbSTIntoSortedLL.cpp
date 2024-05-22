#include <bits/stdc++.h> 
/************************************************************

    Following is the Binary Tree node structure
    
    template <typename T>
    class TreeNode {
        public :
        T data;
        TreeNode<T> *left;
        TreeNode<T> *right;

        TreeNode(T data) {
            this -> data = data;
            left = NULL;
            right = NULL;
        }

        ~TreeNode() {
            if(left)
                delete left;
            if(right)
                delete right;
        }
    };

************************************************************/
 void inorder(TreeNode<int>* root, vector<int> &inorderVal){
        if(root == NULL){
            return ;
        }
        inorder(root->left, inorderVal);
        inorderVal.push_back(root->data);
        inorder(root->right, inorderVal);
    }
TreeNode<int>* flatten(TreeNode<int>* root)
{ 
     //step 1st 
        vector<int> inorderVal;
        inorder(root, inorderVal);
        int n = inorderVal.size();

        TreeNode<int>* newRoot = new TreeNode<int>(inorderVal[0]);
        TreeNode<int>* curr = newRoot;

        //2nd step  
        for(int i=1; i<n; i++){

            TreeNode<int>*  temp = new TreeNode<int>(inorderVal[i]);
            //define the connectoins
            curr->left = NULL;
            curr->right = temp;
            
            //curr ko age wale pe point kara do 
            curr = temp;

        }

        // 3rd part 
        curr->left = NULL;
        curr->right = NULL;

       return newRoot;








}