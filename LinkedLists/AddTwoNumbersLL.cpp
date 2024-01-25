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
    
    ListNode * reversed(ListNode* head){
        ListNode * curr = head;
        ListNode * prev = NULL;
        ListNode * next = NULL;

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;
        }
        return prev;
    }

    void insertAtTail(ListNode* &head, ListNode* &tail, int value){
        ListNode * temp = new ListNode(value);
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
    ListNode *  add(ListNode* first, ListNode* second){
        int carry = 0;
        
        ListNode * ansHead = NULL;
        ListNode * ansTail = NULL;

        while(first != NULL || second != NULL || carry != 0){
            int val1=0, val2=0;
           if(first != NULL){
             val1 = first->val;
            
           }
           if(second != NULL){
             val2 = second->val;
            
           }

           int sum = carry + val1 + val2;
           int digit = sum%10;
            
        //craete node and add to the ans list
           insertAtTail(ansHead, ansTail, digit);

           carry = sum/10;

           if(first !=NULL)
              first = first->next;

           if(second !=NULL){
              second = second->next;
            }

        } 
        return ansHead;
        



    }


    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
         //step 1 reverse the lists
         l1 = reversed(l1);
         l2  = reversed(l2);
         
         //add two lists
         ListNode * ans = add(l1, l2);
         
         //reverse the list ans
         ListNode * ans2 = reversed(ans);
         return ans2;
    }
};