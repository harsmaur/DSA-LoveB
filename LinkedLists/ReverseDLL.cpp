#include<iostream>
using namespace std;
/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next,*prev;
    Node()
    {
        this->data = 0;
        next = NULL;
        prev= NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
        this->prev= NULL;
    }
    Node(int data, Node* next, Node *prev)
    {
        this->data = data;
        this->next = next;
        this->prev= prev;
    }
};

*/

Node * reversedl(Node * head){
    if(head == NULL || head->next == NULL){
        return head;
    }
    Node * curr = head;
    Node * prev = NULL;
    Node * next = NULL;

    while(curr != NULL){
        next = curr->next;  //stored next node of curr in next
        curr->next = prev;  // pointed next pointer of curr to prev
        curr->prev = next;  // pointed next pointer  of curr to next 
        prev = curr;        // shifted prev by one'
        curr = next;         // shifted curr by one 
    }
    return prev;
}
Node* reverseDLL(Node* head)
{   
   return reversedl(head);
    // Write your code here   
}


