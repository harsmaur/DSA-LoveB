#include<iostream>
using namespace std;

class Node{
    public:
      int data;
      Node * next;
      
      //constructor to create node evrytime a node has object has created
      Node(int data){
        this->data = data;
        this->next = NULL;
      }
      Node (){}


};


void InsertAtHead(Node*  &head, int data){
    Node * ptr = new Node(data);
    ptr->next = head;
    head = ptr;
    
}


void InsertAtIndex(Node* &head, int data, int index){

     Node * p = head;
     int i =0;
     while(i<index-1){
        p = p->next;
        i++;
     }

     Node * ptr = new Node(data);
     ptr->next = p->next;
     p->next = ptr;

   
}

void InsertAtEnd(Node * &head, int data){
    Node * p = head;
    while(p->next !=NULL){
        p = p->next;
    }

    Node* ptr = new Node(data);
    ptr->next = p->next;
    p->next = ptr;
}

void InsertAfterNode(Node* &PrevNode, int data){
    Node * ptr = new Node(data);
    ptr->next = PrevNode->next;
    PrevNode->next = ptr;
}


void traverse(Node* ptr){
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr= ptr->next;
    }
    cout<<endl;
}


int main()
{

    Node * head = new Node(1);
   
    Node * node2 = new Node(2);
    Node * node3 = new Node(3);
    Node * node4 = new Node(4);
    Node * node5 = new Node(5);

    head->next  = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    
    // traverse(head);

    // InsertAtHead(head, 0);
    // traverse(head);

    // InsertAtIndex(head, 9, 1);
    //     traverse(head);

    // InsertAtEnd(head, 6);
    // InsertAtEnd(head, 7);
    //  traverse(head);

    InsertAfterNode(node3, 10);
     traverse(head);


    return 0;
}