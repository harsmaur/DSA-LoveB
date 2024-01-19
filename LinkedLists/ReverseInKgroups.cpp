#include<iostream>
using namespace std;
class Node{
   public:
   int data;
   Node * next;
   Node * prev;
};

Node * kReverse(Node * head, int k){
      //base case
      if(head == NULL){
        return head;
      }
       // count the number of nodes
      int countNodes = 0;
      Node* temp = head;
      while(temp != NULL){
        temp = temp->next;
        countNodes++;
      }

      Node * curr = head;
      Node * prev = NULL;
      Node* next = NULL;
      int count = 0;

      //if number of nodes is less than k return the head
      if(countNodes >= k){
        // step 1: reverse first k nodes using the iterative approach
        while(count < k || curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
            count++;
        }  
        // step 2: for next remaining nodes, do a recursive call
           if(next != NULL){
            head->next = kReverse(next, k);
             }
           // step 3: return head of the reversed LL
           return prev;
      
      }else{
         // if there are fewer than k nodes, return the original head
        return head;
      }


}
int main()
{
    
    return 0;
}