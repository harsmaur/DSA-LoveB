#include<iostream>
#include<map>
#include<queue>
#include<vector>
#include<pair>
using namespace std;



class Solution
{
    public:
    //Function to find the vertical order traversal of Binary Tree.
    vector<int> verticalOrder(Node *root)
    {
        map <int, map<int, vector<int>>> nodes; // to map the hd to the levelwise Nodes
        queue < pair <Node *, pair<int, int>>> q;
        vector<int> ans;
        
        if(root == NULL){
            return ans;
        }
        
        q.push(make_pair(root, make_pair(0,0)));
        // initially the root is at hd 0 and level 0
        
        while(!q.empty()){
            pair<Node*, pair<int, int>> temp = q.front();  // take the firstNode from the queue
            q.pop(); // pop it
            
            Node * frontNode = temp.first;
            int hd = temp.second.first;  // horizontal distance
            int lvl = temp.second.second; // level 
            
            nodes[hd][lvl].push_back(frontNode->data); // map the node to corresponding hd and level
            
            if(frontNode->left){
                q.push(make_pair(frontNode->left, make_pair(hd-1, lvl+1)));
                //if left exist then push the left node and the horizontal distance-1 nad level +1 since we are going in left 
            }
            if(frontNode->right){
                q.push(make_pair(frontNode->right, make_pair(hd+1, lvl+1)));
            }
        }
        
        for(auto i: nodes){
            
            for(auto j: i.second){
                for(auto k: j.second){
                    ans.push_back(k);
                }
                
            }
        }
        
        return ans;
        
        
        
        
    }
};