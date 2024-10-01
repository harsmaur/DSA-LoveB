#include<iostream>
#include<queue>
using namespace std;

class Node{
    public:
      int data;
      Node * left;
      Node* right;

      Node(int d){
        this->data = d;
        this->left = NULL;
        this->right = NULL;
      }

  

};


   Node * buildTree( Node * root){
       cout<<"Enter the data " << endl;
       int data;
       cin>>data;
       root = new Node(data);

       if(data == -1){
        return NULL;
       }

       cout<<"Enter data for inserting at the left of"<< data<< endl;
       root->left = buildTree(root->left);

       cout<<"Enter data for inserting at right of"<<data <<endl;
       root->right = buildTree(root->right);
       return root;

     } 

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



   void BuildFromLevelOrder(Node * &root){
    queue<Node *> q;
    //root node banaya
    cout<<"Enter data for the root "<< endl;
    int data;
    cin>>data;
    root = new Node(data);
    q.push(root);

    while(!q.empty()){
        // us root node ko nikala queue se
         Node * temp = q.front();
         q.pop();


         cout<<"Enter left Node for :" <<temp->data<<endl;
         int leftData;
         cin>>leftData;
         
         //root node ke left me insert
         if(leftData != -1){
            temp->left = new Node(leftData);
            q.push(temp->left);
         }


         //root node ke right me insert
         cout<<"Enter right Node for :" <<temp->data<<endl;
         int rightData;
         cin>>rightData;
         
         if(rightData != -1){
            temp->right = new Node(rightData);
            q.push(temp->right);
         }
    }
   }
int main()
{
    /*
    Node * root =   NULL;
    root = buildTree(root);
    // 1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order traversal
   

    cout<<"Inorder"<<endl;
    inorder(root);
    cout<<endl;

    cout<<"PreOrder"<<endl;
    preOrder(root);
    cout<<endl;

    cout<<"postOrder"<<endl;
    postOrder(root);
    cout<<endl; */

    Node * root = NULL;
    BuildFromLevelOrder(root);
     cout<<"Printing the level Order Traversal "<<endl;
    LevelOrderTraversal(root);
    // LevelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1 


    
    
    return 0;
}
