int countNodes(struct Node * root){
    
    if(root == NULL){
        return 0;
    }
    int count = 1 + countNodes(root->left) + countNodes(root->right); // 1 for root node
    return count;
    
}

bool isCBT(struct Node * root, int index, int cnt){ // index is current node index
    
    if(root == NULL){
        return true;
    }
     
    if(index >= cnt){
        return false;
    }
    else{
        bool left = isCBT(root->left, 2*index+1, cnt);
        bool right = isCBT(root->right, 2*index+2, cnt);
        
        return (left && right);
    }
    
} 

bool isMaxOrder(struct Node * root){
    //leaf node
    if(root->left == NULL && root->right == NULL){
        return true;
    }
    
    //left exists only
    if(root->right == NULL){
        return (root->data > root->left->data);
    }
    else{ //both child nodes exists
        bool left = isMaxOrder(root->left);
        bool right = isMaxOrder(root->right);
        
        return(left && right 
           && (root->data > root->left->data && root->data > root->right->data));
           
         
    }
}

class Solution {
  public:
    bool isHeap(struct Node* tree) {
        int index= 0;
        
        int totalcount = countNodes(tree);
        
        if(isCBT(tree, index, totalcount) && isMaxOrder(tree)){
            return true;
            
        }else{
            return false;
        }
    
    }
    
    
    
};