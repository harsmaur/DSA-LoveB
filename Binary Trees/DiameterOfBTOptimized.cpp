#include<iostream>

using namespace std;

pair<int, int> diameterFast(Node * root){
    //base case check if the root is null
    if(root == NULL){
        pair<int, int> p = make_pair(0,0);
        return p;
    }
    
    pair<int, int> left = diameterFast(root->left);
    pair<int, int> right = diameterFast(root->right);


   // first value of pair stores the diameter second stores height
    int opt1 = left.first; // max diameterr from the left
    int opt2 = right.first; // max diamter from the right
    int opt3 = left.second + right.second +1; // max diameter from combiantio nof both right and left

    pair<int, int> ans;
    ans.first = max(opt1, max(opt2, opt3));  //diameter is max of all thrree cases left right or combination of both 
    ans.second = max(left.second, right.second) + 1; 
    return ans;
    

   

}
int main()
{
    
    return 0;
}