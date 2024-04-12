#include<iostream>
using namespace std;


class Solution
{
    pair<bool, int> isSumTreeFast(Node * root){
        //base cases
        if(root == NULL){
            pair<bool, int> p = make_pair(true, 0); // since empty tree is sum so return true and sum is  0
            return p;
        }
        if((root->left == NULL) && (root->right == NULL)){ // leaf node
            pair<bool, int> p = make_pair(true, root->data); //return that roots data 
            return p;
        }
        
        pair<bool, int> leftAns = isSumTreeFast(root->left);
        pair<bool, int> rightAns = isSumTreeFast(root->right);
        
        
        bool left = leftAns.first;
        bool right = rightAns.first;
        
        bool condn = root->data == leftAns.second + rightAns.second;
        
        pair<bool, int> ans;
        
        if(left && right && condn){
            ans.first = true;
            ans.second = 2 * root->data; // if this root is a sum tree then its value is 
            
        }else{
            ans.first = false;
        }
        
        return ans;
        
        
    }
    public:
    bool isSumTree(Node* root)
    {
     return isSumTreeFast(root).first;
    }
};

int main()
{
    
    return 0;
}