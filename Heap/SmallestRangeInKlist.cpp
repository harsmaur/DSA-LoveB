#include <limits.h>
#include <queue>
class node{
    public:
    int data, row, col;

    node(int data,int row,int col){
        this->data = data;
        this->row = row;
        this->col = col;
    }

};
class compare{
  public:
  bool operator()(node * a, node *b){
      return a->data > b->data;
  }  

};



int kSorted(vector<vector<int>> &a, int k, int n) {
    int mini = INT_MAX, maxi = INT_MIN;

    priority_queue<node * , vector<node*>, compare> minHeap;
    
    for(int i=0; i<k; i++){
        int element = a[i][0];
        mini = min(mini, element);
        maxi = max(maxi, element);
        minHeap.push(new node(element, i, 0));
    }
//     mini and maxi are initialized to track the minimum and maximum values in the current range.
// A priority queue (min-heap) is initialized using the custom comparator.
// The first element of each row is pushed into the min-heap, and mini and maxi are updated accordingly.

    int start = mini;
    int end = maxi;

    while(!minHeap.empty()){
         node * temp = minHeap.top();
         minHeap.pop();

// The smallest element (mini) is extracted from the min-heap
         mini = temp->data;

//The range is updated if a smaller range is found.
         if(maxi - mini < end - start){
             start = mini;
             end = maxi;
         }

//If the current row has more elements, the next element is pushed into the min-heap, and maxi is updated.
         if(temp->col +1 < n){
             maxi = max(maxi, a[temp->row][temp->col+1]);
             minHeap.push(new node( a[temp->row][temp->col+1], temp->row, temp->col+1));

         }
         else{
            //  If the current row is exhausted, the loop breaks.
             break;
         }


    }
   // [5, 5] ans = 1 which is 5-5+1 = 1
    return (end - start +1);


}