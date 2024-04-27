/*Complete the code here.
Node is as follows:
struct Node
{
  int data;
  Node* left;
  Node* right;
};
*/
class Solution{
    public:
    
    int findPosition(int in[],int inOrderStart, int inOrderEnd, int element, int n ){
        
        for(int i=inOrderStart; i<=inOrderEnd; i++){
            if(in[i] == element){
                return i;
            }
        }
        return -1;
    }
    
    Node * solve(int in[], int pre[], int &index, int inOrderStart, int inOrderEnd, int n){
        
        //base case
        if(index >= n || inOrderStart > inOrderEnd){
            return NULL;
        }
        
        
        int element = pre[index++]; // after getting that element increment the index 
        
        Node * root = new Node(element); // create root for that element
        
        int position = findPosition(in,inOrderStart,inOrderEnd, element, n);
        
        root->left = solve(in, pre, index, inOrderStart, position-1, n);
        root->right = solve(in, pre, index, position+1, inOrderEnd, n);
        
        return root;
        
        
        
        
    }
    
    
    
    Node* buildTree(int in[],int pre[], int n)
    {
        // Code here
        int preOrderIndex = 0;
        int inOrderStarting = 0;
        int inOrderEnding = n-1;
       Node * ans =  solve(in, pre, preOrderIndex, inOrderStarting, inOrderEnding, n);
       return ans;
        
    }
};