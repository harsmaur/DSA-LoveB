#include<iostream>
using namespace std;

    
    class Node {
        public :

        int data;
        Node *next;

        Node(int data) {
            this -> data = data;
            this -> next = NULL;
        }
    };

Node * floyd(Node * head){
    if(head == NULL){
        return NULL;
    }

    Node * slow = head;
    Node * fast = head;

    while(slow != NULL && fast != NULL && fast->next !=NULL){
        fast = fast->next->next;
       
        slow = slow->next;
        
        if(slow == fast){
             return slow;
        }
    }
    return NULL;
   
}

Node * getStartNode(Node * head){

    Node * intscnNode = floyd(head);

    if(intscnNode == NULL){
        return NULL;
    }
    Node * slow = head;

    while(slow != intscnNode){
        slow = slow->next;
        intscnNode = intscnNode->next;
    }
    return slow;
}



Node *removeLoop(Node *head)
{
    // Write your code here.
    if(head == NULL){
        return NULL;
    }

    Node * startNode = getStartNode(head);

    if(startNode == NULL){
        return head;
    }
    Node * temp = startNode;

    while(temp->next != startNode){
        temp = temp->next;

    }
    temp->next = NULL;
    return head;
}


