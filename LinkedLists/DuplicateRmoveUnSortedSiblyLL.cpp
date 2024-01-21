#include <bits/stdc++.h> 

    Following is the class structure of the Node class:
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


//Approach 1
Node *removeDuplicates(Nozde *head) {
    if (head == NULL) {
        return NULL;
    }

    Node* curr = head;

    while(curr != NULL && curr->next != NULL){
        Node * temp = curr;

          while(temp->next  != NULL){
              if(curr->data == temp->next->data){
                  Node * NodeToDel = temp->next;
                  temp->next = temp->next->next;
                  delete NodeToDel;
              }else{
               temp = temp->next;
              }
             
          }
          curr = curr->next;
    }

    return head;

//Approach 2

//using map 




Node *removeDuplicates(Node *head) {
   
    if (head == NULL) {
        return NULL;
    }
     Node * curr = head;
     Node * prev = NULL;

    unordered_map<int, bool> visited;
   
    while(curr != NULL){
        if(!visited[curr->data]){
            visited[curr->data] = true;
            prev = curr;
            curr = curr->next;
        } else {
            prev->next = curr->next;
            delete curr;
        }

        curr = prev->next;
    }

    return head;
}
