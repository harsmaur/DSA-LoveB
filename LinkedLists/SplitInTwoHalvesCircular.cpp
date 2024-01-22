#include <bits/stdc++.h> 

    class Node
    {
    public:
        int data;
        Node *next;
        Node(int data)
        {
            this->data = data;
            this->next = NULL;
        }
    };

Node * getMiddleNode(Node * head){
    Node * slow = head;
    Node* fast = head->next; // in circular we start fast from head->next 
    while(fast != head && fast->next != head){
       fast = fast->next->next;
       slow = slow->next;
    }
    return slow;
}
void splitCircularList(Node *head)
{
    Node * slow = getMiddleNode(head);
    // Write your code here.
    Node * head1 = head;
    Node  * head2 = slow->next;

    slow->next = head1;

    Node * curr = head2;
    while(curr->next !=head){
        curr = curr->next;
    }
    curr->next = head2;


}
