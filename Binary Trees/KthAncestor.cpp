Node * solve(Node *root, int &k, int node){
    if(root == NULL){
        return NULL;
    }
    
    // if root is the node then return the node->data
    if(root->data == node){
        return root;
    }
    
    Node * leftAns = solve(root->left, k, node);
    Node * rightAns = solve(root->right, k, node);
    
    // if left an is not null means it has node value and right is null decrement k by one and check if it is 0 or not
    if(leftAns !=NULL && rightAns == NULL){
        k--;
        if(k<=0){
            k = INT_MAX; // k ko int max is liye kia taki wo dobara 0 na ho sake ans lock krdia
            return root;
        }
        return leftAns;
    }
    
    if(leftAns == NULL && rightAns != NULL){
        k--;
        if(k<=0){
            k = INT_MAX;
            return root;
        }
        return rightAns;
    }
    
    return NULL;
    
    
}
int kthAncestor(Node *root, int k, int node)
{
    // Code here
    Node * ans = solve(root, k, node);
    //handled the edge case when the ans->data is already node and k is not zero
    if(ans == NULL || ans->data == node){
        return -1;
    }else{
        return ans->data;
    }

}