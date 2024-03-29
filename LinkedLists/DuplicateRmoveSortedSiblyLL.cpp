#include<iostream>
using namespace std;


//   Definition for singly-linked list.
  struct ListNode {
      int val;
      ListNode *next;
      ListNode() : val(0), next(nullptr) {}
      ListNode(int x) : val(x), next(nullptr) {}
      ListNode(int x, ListNode *next) : val(x), next(next) {}
  };
 
class Solution {
public:
    ListNode* deleteDuplicates(ListNode* head) {
        if(head == NULL){
            return NULL;

        }

        ListNode * curr = head;
        while(curr != NULL && curr->next != NULL){

            if(curr->val == curr->next->val){
                //store the next next node 
                ListNode * next_next = curr->next->next;
                ListNode * NodeToDelete = curr->next;
                delete(NodeToDelete);
                curr->next = next_next;
            }else{
                curr = curr->next;
            }
        }
        return head;
    }
};