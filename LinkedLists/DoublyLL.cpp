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

    ~Node(){
        int value = this->data;
        if(next != NULL){
            delete next;
            next = NULL;
        }
        cout<<"Memory free for node with data" <<value<<endl;
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
    //empty list case
    if(head == NULL){

      Node * ptr = new Node(data);
      head = ptr;
    }else
    {
    Node * ptr = new Node(data);
    ptr->next = head;
    head->prev = ptr;
    head = ptr;
    }
   
}

void InsertATEnd(Node * &head, int data){
    //empty list case
    if(head == NULL){
        Node* ptr = new Node(data);
        head = ptr;
    }
    else{
    Node* ptr = new Node(data);
    Node * p = head;
    while(p->next !=NULL){
        p = p->next;
    }
    p->next = ptr;
    ptr->prev = p;
    }
   
}

void InsertAtIndex(Node * &head, int data, int index){
   
        Node * p = head;
        Node * q = head->next;
        int i = 0;
        while(i != index-1){
           p = p->next;
           q = q->next;
           i++;
        }
        
        Node * ptr = new Node(data);
        ptr->next = p->next;
        q->prev = ptr;
        p->next = ptr;
        ptr->prev = p;

    }

void DeleteNode(Node* &head, int position){
    if(position == 1){
        Node * p = head;
        p->next->prev = NULL;
        head = p->next;
        p->next = NULL; 
        delete p;
    }

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

      InsertAtIndex(head, 50, 2);
      traverse(head);


    return 0;
}