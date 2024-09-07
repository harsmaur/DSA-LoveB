#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node * next;

    Node(int data){
        this->data = data;
        this->next = NULL;
    }
    Node(){}

};

void DeleteAtFirst(Node * &head){
    Node * ptr = head;
    head=head->next;
    delete ptr;
}

void DeleteAtIndex(Node * &head, int index){
    Node * p = head;
    Node * q = head->next;

    for(int i =0; i<index-1; i++){
        p =p->next;
        q = q->next;
    }
   p->next = q->next;
   delete q;


}

void DeleteAtEnd(Node * &head){
    Node * p = head;
    Node * q = head->next;
    while(q->next != NULL){
        p = p->next;
        q = q->next;
    }
    p->next = NULL;
    delete q;
}

void DeleteByValue(Node* &head, int value){
    Node * p = head;
    Node* q = head->next;

    while(q->data != value && q->next != NULL){
        p = p->next;
        q = q->next;

    }
   if(q->data == value){
       p->next = q->next;
       delete q;
}
   }
    

void traverse(Node* ptr){
    while(ptr != NULL){
        cout<<ptr->data<<" ";
        ptr = ptr->next;
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

    traverse(head);
    // DeleteAtFirst(head);
    //  traverse(head);
    // DeleteAtFirst(head);
    //  traverse(head);

    // DeleteAtIndex(head, 2);
    // traverse(head);

    // DeleteAtEnd(head);
    // traverse(head);
    //  DeleteAtEnd(head);
    // traverse(head);

    DeleteByValue(head, 5);
    traverse(head);



    return 0;
}