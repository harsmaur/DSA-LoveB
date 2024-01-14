#include <iostream>
using namespace std;

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

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            next = NULL;
        }
    }
};

void InsertAtFirst(Node * &head, int data){
    Node * p = head;
    while(p->next != head){
        p = p->next;
    }

    Node * ptr = new Node(data);
    p->next = ptr;
    ptr->next = head;
}

void InsertAfterNode(Node * &prevNode, int data){
    Node * ptr = new Node(data);
    ptr->next = prevNode->next;
    prevNode->next = ptr;
}

void traverse(Node *head)
{
    Node *p = head;
    do
    {
        cout << p->data << " ";
        p = p->next;
    } while (p != head);
    cout << " ";
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


    InsertAtFirst(head, 10);
    traverse(head);

    InsertAfterNode(node3, 90);
    traverse(head);
    return 0;
}