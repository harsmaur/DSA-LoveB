#include <iostream>
#include<map>
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
};

bool detectLoop(Node *head)
{
    if (head == NULL)
    {
        return false;
    }
    map<Node *, bool> visited;

    Node *temp = head;

    while (temp != NULL)
    {
         
        if (visited[temp] == true)
        {
            // cout << "cycle is present " << endl;
            return true;
        }
        visited[temp] = true;
        temp = temp->next;
    }

    return false;
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
    node5->next = head->next;

    if(detectLoop(head)){
        cout<<"Cycle is present"<<endl;
    }else{
        cout<<"No cycle"<<endl;
    }
    return 0;
}