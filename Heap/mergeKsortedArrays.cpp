#include <bits/stdc++.h> 

class node{
    public:
    int data;
    int row;
    int col;

    node(int data, int row, int col){
          this->data = data;
          this->row = row;
          this->col = col;
    }


};
//custom comparator for priority queue
class compare{
    public:
    bool operator()(node* a, node* b){
        return a->data > b->data;
    }

};
vector<int> mergeKSortedArrays(vector<vector<int>>&kArrays, int k)
{
    priority_queue<node *, vector<node*>, compare> minHeap;

    //step1 first element of all arryas insert into heap min

    for(int row =0; row<k; row++){
        node * temp = new node(kArrays[row][0], row, 0); //first element means 1 row 0th column
        minHeap.push(temp);
  
    }

    vector<int> ans;

    //step2
     while(minHeap.size()  > 0 ){
         node * temp = minHeap.top();
          ans.push_back(temp->data);
          minHeap.pop();

          int row = temp->row;
          int col = temp->col;
         
         if(col+1 < kArrays[row].size()){
             node * next = new node(kArrays[row][col+1], row, col+1);
             minHeap.push(next);
         }
          
     }

     return ans;
}