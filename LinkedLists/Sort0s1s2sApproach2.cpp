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

// Function to insert a node at the tail of a linked list
void insertATTail(Node*& tail, Node* curr)
{
    tail->next = curr;
    tail = curr;
}

// Function to sort a linked list containing values 0, 1, and 2
Node* sortList(Node* head)
{
    // Create dummy nodes for three different values
    Node* oneHead = new Node(-1);
    Node* oneTail = oneHead;

    Node* twoHead = new Node(-1);
    Node* twoTail = twoHead;

    Node* zeroHead = new Node(-1);
    Node* zeroTail = zeroHead;

    // Traverse the original linked list and segregate nodes based on values
    Node* curr = head;

    while (curr != NULL)
    {
        int value = curr->data;
        if (value == 0)
        {
            insertATTail(zeroTail, curr);
        }
        else if (value == 1)
        {
            insertATTail(oneTail, curr);
        }
        else if (value == 2)
        {
            insertATTail(twoTail, curr);
        }
        curr = curr->next;
    }

    // Merge the three sublists
    zeroTail->next = (oneHead->next != NULL) ? oneHead->next : twoHead->next;
    oneTail->next = twoHead->next;
    twoTail->next = NULL;

    // Return the head of the sorted list
    head = zeroHead->next;
    delete zeroHead;
    delete oneHead;
    delete twoHead;
    return head;
}
