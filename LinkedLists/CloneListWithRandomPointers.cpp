#include<iostream>
#include<map>
#include<unordered_map>
using namespace std;


// Definition for a Node.
class Node {
public:
    int val;
    Node* next;
    Node* random;
    
    Node(int _val) {
        val = _val;
        next = NULL;
        random = NULL;
    }
};


class Solution {
    private:
    void insertAtTail(Node * &head, Node * &tail, int value){
          Node * temp = new Node(value);
         // if list is empty
        if(head == NULL){
          head = temp;
          tail = temp;
          return;

        }else{  //notempty
          tail->next = temp;
          tail = temp;

        }
    }
public:
 
    Node* copyRandomList(Node* head) {

        //step 1 copy the list with next pointers
        Node * cloneHead = NULL;
        Node * cloneTail = NULL;

        Node * temp = head;
        while(temp !=NULL){
            insertAtTail(cloneHead, cloneTail, temp->val);
            temp = temp->next;
        }

        //step 2 create a map
        unordered_map<Node*, Node*> oldToNewNode;

        Node * OriginalNode = head;
        Node * ClonedNode = cloneHead;
         //creating mapping
        while(ClonedNode != NULL && OriginalNode != NULL){

            oldToNewNode[OriginalNode] = ClonedNode; //map kara dia
            OriginalNode = OriginalNode->next;
            ClonedNode = ClonedNode->next;

        }

        //rearranging the random pointers
        OriginalNode = head;
        ClonedNode = cloneHead;

        while(ClonedNode != NULL && OriginalNode != NULL){
            ClonedNode->random = oldToNewNode[OriginalNode->random];
            OriginalNode = OriginalNode->next;
            ClonedNode = ClonedNode->next;
        }
        return cloneHead;

            
            
    }
};