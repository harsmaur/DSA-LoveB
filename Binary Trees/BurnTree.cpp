// User function Template for C++
#include<iostream>
using namespace std;


struct Node {
    int data;
    Node *left;
    Node *right;

    Node(int val) {
        data = val;
        left = right = NULL;
    }
};

class Solution {
  public:
  
   //create mapping 
   // find target node
   Node *createParentMapping(Node * root, int target, map<Node*, Node*> 
   &nodeToParent){
       
       Node * res = NULL;
       queue<Node*> q;
       
       q.push(root);
       
       while(!q.empty()){
           
           Node * front = q.front();
           q.pop();
           
           if(front->data == target){
               res = front;
           }
           
           if(front->left){
               nodeToParent[front->left] = front;
               q.push(front->left);
           }
           
           if(front->right){
               nodeToParent[front->right] = front;
               q.push(front->right);
           }
       }
       return res;
   }
   
   int burnTree(Node * root, map<Node*, Node*> &nodeToParent){
       
       //create map for visited nodes
       map<Node*, bool> visited;
       // queue for current node
       queue<Node*> q;
       q.push(root);
       
       visited[root] = true;
       
       int ans = 0;
       while(!q.empty()){
           
           bool flag = false;
           
           int size = q.size();
           
           for(int i=0; i<size; i++){
               //process the neighbouring nodes
               Node* front = q.front();
               q.pop();
               
               //burn left
               if(front->left && !visited[front->left]){
                   flag = true;
                   q.push(front->left);
                   visited[front->left] = true;
               }
               
               //burn right
               if(front->right && !visited[front->right]){
                   flag = true;
                   q.push(front->right);
                   visited[front->right] = true;
               }
               //burn parent
               if(nodeToParent[front] && !visited[nodeToParent[front]]){
                   flag = true;
                   q.push(nodeToParent[front]);
                   visited[nodeToParent[front]] = true;
               }
               
               
           }
           if(flag == true){
               ans++;
           }
       }
       return ans;
       
       
   }
   
   
    int minTime(Node* root, int target) 
    {   
        
        int ans = 0;
        // map to get parent node from child node
        map<Node *, Node*> nodeToParent; //<node, parent>
        
       
        // get the target node
        Node * targetNode = createParentMapping(root, target,nodeToParent); 
        
        //burn the tree
       ans = burnTree(targetNode, nodeToParent);
        
        return ans;
        
        
    }
};