#include<iostream>
using namespace std;


Node * getMiddle(Node * head){
    if(head == NULL || head->next == NULL){
        return head;

    }
    //2 nodes
    if(head->next->next == NULL){
        return head->next;
    }

    Node * fast = head->next;
    Node* slow = head;
    while(fast != NULL){

        fast = fast->next; // increment fast by one
        if(fast != NULL){
            fast = fast->next; // if not null again increment by one
        }
        slow = slow->next;
        
    }
    return slow;
}
Node *findMiddle(Node *head) {



    return getMiddle(head);


}
