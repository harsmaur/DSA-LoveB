vector<int> diagonal(Node *root)
{
    vector<int> diagonal;
    queue<Node *> q;
    if(root == NULL){
        return diagonal;
    }
    
    q.push(root);
    
    while(!q.empty()){
        Node * temp = q.front();
        q.pop();
        
        while(temp!=NULL){
            diagonal.push_back(temp->data);
            q.push(temp->left);
            temp = temp->right;
            
        }
    }
    return diagonal;
   // your code here
}