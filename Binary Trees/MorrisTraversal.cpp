//
#include<iostream>
using namespace std;

struct Node
{
    int val;
    Node * left, *right;
    Node(int x) : val(x), left(NULL), right(NULL) {}

};

void MorrisTraversal(Node * root){
    //Get the current node
    Node * curr = root;

    while(curr != NULL){
         
          if(curr->left == NULL){
            cout<< curr->val <<" ";
            curr = curr->right;
          }
          else{
            Node * predecessor = curr->left;

            while(predecessor->right != NULL && predecessor->right != curr){
                predecessor = predecessor->right;
            }

            if(predecessor->right == NULL){
                predecessor->right = curr;
                curr = curr->left;
            }
            else{
                predecessor->right = NULL;
                cout<< curr->val<<" ";
                curr = curr->right;
            }


          }
    }
}



int main()
{
    
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    
    cout << "Morris Traversal: ";
    MorrisTraversal(root);
    

    
    return 0;
}