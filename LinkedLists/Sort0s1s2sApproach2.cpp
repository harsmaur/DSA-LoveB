#include<iostream>
using namespace std;


// Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};


void insertATTail(Node * &tail, Node* curr){
    tail->next = curr;
    tail = curr;
}
Node* sortList(Node *head){
      
      Node * oneHead = new Node(-1);
      Node * oneTail = oneHead;

      Node * twoHead = new Node(-1);
      Node * twoTail = twoHead;

      Node * zeroHead = new Node(-1);
      Node * zeroTail = zeroHead;

        Node * curr = head;


        while(curr != NULL){
            int value = curr->data;
            if(value == 0){
                insertATTail(zeroTail, curr);
            }
           else if(value == 1){
               insertATTail(oneTail, curr);
            }
            else if(value == 2){
                insertATTail(twoTail, curr);
            }
            curr = curr->next;
        }


        //merge
        zeroTail->next = (oneHead->next != NULL) ?oneHead->next:twoHead->next;
       

        oneTail->next = twoHead->next;
        twoTail->next = NULL;

        return zeroHead->next;


}