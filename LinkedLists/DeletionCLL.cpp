#include<iostream>
using namespace std;



class Node{
  public:
  int data;
  Node * next;

  Node(int data){
    this->data = data;
    this->next = next;
  }

};


void DeleteNodeByValue(Node * &head, int value){
    //check if empty
    if(head == NULL){
        return;
    }else{

        //non empty assuming that the value is present in the list
        Node * prev = head;
        Node * curr = head->next;  //(q is the node deleting)

        while(prev->data != value){
            prev = prev->next;
            curr = curr->next;
        }

        prev->next = curr->next;

        //1 node libked List
        if(curr == NULL){
            head = NULL;
        }

        //2 node linked list
        if(head == curr){
            head = prev;
        }
        curr->next = NULL;
        delete curr;
    }

   
}

void traverse(Node * head){
    Node * p = head;
    do{
        cout<<p->data<<" ";
        p = p->next;
    }while(p != head);
    cout<<" ";
}


int main()
{
    Node *head = new Node(1);
    Node *node2 = new Node(2);
    Node *node3 = new Node(3);
    Node *node4 = new Node(4);
    Node *node5 = new Node(5);

    head->next  = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = head; // pointed to head 
    traverse(head);
    DeleteNodeByValue(head, 5);
    traverse(head);
    return 0;
}