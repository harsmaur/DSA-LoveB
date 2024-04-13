class Solution
{
    public:
    //Function to return a list of nodes visible from the top view 
    //from left to right in Binary Tree.
    vector<int> topView(Node *root)
    {
        vector<int> ans;
        if(root == NULL){
            
            return ans;
        }
        
        map<int, int> topNode; // <hd, node data>
        queue<pair<Node *, int>> q; //<node, hd>
        
        q.push(make_pair(root, 0));
        
        while(!q.empty()){
            pair<Node *, int> temp = q.front();
            q.pop();
            
            Node * frontNode = temp.first;
            int hd = temp.second;
            
            // if one value present in map for hd then do nothing
            if(topNode.find(hd) == topNode.end()){ // hd ki value agr topNode m nhi mili to iska output topNode.end() ke barabar ata hai 
                topNode[hd] = frontNode->data;
            }
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left, hd-1));
            }
            
             if(frontNode->right){
                q.push(make_pair(frontNode->right, hd+1));
            }
            
            
        }
        for(auto i: topNode){
            ans.push_back(i.second);
        }
        
        return ans;
    }

};