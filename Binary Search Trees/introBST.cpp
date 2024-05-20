#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
    }
};

 void LevelOrderTraversal(Node * root){
        queue<Node*> q;
        q.push(root);
        q.push(NULL); // separator

        while(!q.empty()){

            Node * temp = q.front();
            q.pop();

            if(temp == NULL){
                //mtlb purana level complete traverse ho chuka hai
                cout<<endl;
                if(!q.empty()){
                    //queeu still has some child nodes
                    q.push(NULL);
                }
            }
            else{
                     cout<<temp->data<<" ";
                     if(temp->left){
                      q.push(temp->left);
                      }

                     if(temp->right){
                       q.push(temp->right);
                      }
                } 
        }
     }

      void inorder(Node * root){
        //LNR
        if(root == NULL){
            return;
        }
        inorder(root->left);
        cout<<root->data<<" ";
        inorder(root->right);
     }

      void preOrder(Node * root){
        //NLR
        if(root == NULL){
            return;
        }

        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
     }

      void postOrder(Node * root){
        //LRN
        if(root == NULL){
            return;
        }
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
       
     }



Node * insertIntoBST(Node * &root, int d){
    //base case
    if(root == NULL){
        //create node
        root = new Node(d);
        return root;
    }

    if(d > root->data){
     // right part me insert krna hai 
     root->right = insertIntoBST(root->right, d);

    }
    else{
        //left part me insert karna hai 
        root->left = insertIntoBST(root->left, d);
    }

    return root;


}
Node *MinValue(Node *root)
{
    Node *temp = root;
    while (temp->left != NULL)
    {
        temp = temp->left;
    }
    return temp;
}

Node * deleteFromBST(Node* root, int val){
    // base case
    if(root == NULL){
        return root;
    }

    if(root->data == val){
        //0 child
        if(root->left == NULL && root->right == NULL){
            delete root;
            return NULL;
        }

        //1 child
          //left child
          if(root->left !=  NULL && root->right == NULL){
              Node * temp = root->left;
              delete root;
              return temp;

          }

          //right child
        if(root->left ==  NULL && root->right != NULL){
              Node * temp = root->right;
              delete root;
              return temp;

          }

        //2 child
         
         if(root->left != NULL && root->right !=NULL){
            int mini = MinValue(root->right)->data;
            root->data = mini;
            root->right = deleteFromBST(root->right, mini);
            return root;
           

         }
    }
    else if(root->data > val){
        root->left = deleteFromBST(root->left, val);
        return root;
    }
    else{
        root->right = deleteFromBST(root->right, val);
        return root;
    }
     return root;
}

void takeInput(Node * &root){
      int data;
      cin>>data;

      while(data != -1){
        insertIntoBST(root, data);
        cin>>data;
      }
}

int main()
{
    Node * root = NULL;

    cout<<"Enter data to create BST"<<endl;
    takeInput(root);


    cout<<"Printing Level Order"<<endl;
    LevelOrderTraversal(root);

    cout<<"Printing inorder "<<endl;
    inorder(root);

    cout<<endl;
    cout<<"Printing preOrder "<<endl;
    preOrder(root);
    cout<<endl;
     cout<<"Printing postorder "<<endl;
    postOrder(root);

    root = deleteFromBST(root, 50);

    cout<<"Printing Level Order"<<endl;
    LevelOrderTraversal(root);

    cout<<"Printing inorder "<<endl;
    inorder(root);

    cout<<endl;
    cout<<"Printing preOrder "<<endl;
    preOrder(root);
    cout<<endl;
     cout<<"Printing postorder "<<endl;
    postOrder(root);
    return 0;
}