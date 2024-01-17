#include<iostream>
using namespace std;
class Node {
    public:
    int data;
    Node * next;



};


//iterative solution 
Node * reverseLinkedList(Node * head){
    if(head == NULL || head->next == NULL){
        return head;

    }

    Node * prev = NULL;
    Node * curr = head;
    Node * forward = NULL;
    while(curr ! = NULL){
        forward = curr->next;
        curr->next = prev;
        prev = curr;
        curr = forward;
    }
}
//2
void reverseRecursive(Node * head, Node * curr, Node * prev ){
    if(curr == NULL){
        head = prev;
        return;
    }
    Node * forward = curr->next;
    reverseRecursive(head, forward, curr);
    curr->next = prev;

}

//3 
Node * reverse(Node * head){
   if(head == NULL || head->next == NULL){
    return head;
   }
    Node * chotaHead = reverse(head->next);
    head->next->next = head;
    head->next = NULL;

    return  chotaHead;
}


int main()
{
    
    return 0;
}