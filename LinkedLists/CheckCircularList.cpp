#include<iostream>
using namespace std;

class Node{

};


    bool isCircular(Node* head){
    // Write your code here.
    if(head == NULL ){
        return true;
    }
    if(head->next == NULL){
        return false;
    }

    Node * temp = head->next;
   
    while(temp != NULL && temp != head){
        temp = temp->next;
    }
    if(temp == head){
        return true;
    }else{
        return false;
    }
}
int main()
{
    return 0;
}