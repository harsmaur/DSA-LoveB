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

bool floydDetect(Node *head)
{
    if(head == NULL){
        return false;
    }

    Node * slow = head;
    Node * fast = head;

    while(slow != NULL && fast != NULL){
        fast = fast->next;
        if(fast!=NULL){
            fast = fast->next;
        }
        slow = slow->next;
        if(slow == fast){
            cout<<"Present at "<<slow->data<<endl;
            return true;
        }
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

 if(floydDetect(head)){
    cout<<"Cycle is present"<<endl;
 }else{
    cout<<"Cycle is not preset"<<endl;
 }
    return 0;
}