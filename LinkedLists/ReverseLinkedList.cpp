#include<iostream>
using namespace std;

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

void reverseRecursive(Node * head, Node * curr, Node * prev ){
    if(curr == NULL){
        head = prev;
        return;
    }
    Node * forward = curr->next;
    reverseRecursive(head, forward, curr);
    curr->next = prev;

}


int main()
{
    
    return 0;
}