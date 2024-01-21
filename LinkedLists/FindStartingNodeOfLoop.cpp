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
};

Node *  floydDetect(Node *head)
{
    if(head == NULL){
        return NULL;
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
            cout<<"cycle Present at "<<slow->data<<endl;
            return slow;
        }
    }
    return NULL;

}

Node *getStartingNode(Node * head){
    if(head == NULL){
        return NULL;
    }

   Node * intersectionNode = floydDetect(head);
   
   
   Node * slow = head;

   while(slow != intersectionNode){
     cout << "Debug: " << slow->data << " " << intersectionNode->data << endl;
    slow = slow->next;
    intersectionNode = intersectionNode->next;
   }
   return slow;
   
}

void traverse(Node * head){
    Node * temp = head;
    while(temp != NULL){
        cout<<temp->data<<" ";
        temp = temp->next;
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
    Node * node6 = new Node(6);
    Node * node7 = new Node(7);

    head->next  = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
     node5->next = node6;
      node6->next = node7;
    node7->next = node2;
    // traverse(head);

    if(floydDetect(head) != NULL){
        cout<<"Cycle is present "<<endl;
     
    }else{
        cout<<"Not Present"<<endl;
    }

   
//    Node * temp = getStartingNode(head);
        // cout<<"Starting Node is " <<temp->data<<endl;

return 0;
}