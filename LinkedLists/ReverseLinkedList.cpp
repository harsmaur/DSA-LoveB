#include<iostream>
using namespace std;

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
int main()
{
    
    return 0;
}