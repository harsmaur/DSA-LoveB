#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* prev;
    Node * next;

    Node(int data){
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;

    }

};

void traverse(Node* head){
    Node * p = head;
    while(p != NULL){
        cout<<p->data<<" ";
        p = p->next;
    }
    cout<<endl;
}

int getLengthOfList(Node * head){
    int length = 0;
     Node * p = head;
    while(p != NULL){
         length++;
         p = p->next;
    }
   return length;
}

void InsertAtHead(Node *&head, int data){
    Node * ptr = new Node(data);
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
}

void InsertATEnd(Node * &head, int data){
    Node* ptr = new Node(data);
    Node * p = head;
    while(p->next !=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->prev = p;
}


int main()
{
    Node * node1 = new Node(1);
    Node * head = node1;

    traverse(head);
    cout<<getLengthOfList(head)<<endl;

      InsertAtHead(head, 2);
      InsertAtHead(head, 3);
      InsertAtHead(head, 4);
      traverse(head);

      InsertATEnd(head, 55);
      InsertATEnd(head, 56);
      InsertATEnd(head, 57);
      traverse(head);
         cout<<getLengthOfList(head)<<endl;
    return 0;
}