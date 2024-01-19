/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
   
public:
    void reverseLL(ListNode* &head,ListNode* prev,ListNode* curr ){
           if(curr == NULL){
               head = prev;
               return;
           }

           ListNode* forward = curr->next;
           reverseLL(head, curr, forward);
           curr->next = prev;

    }

    ListNode* reverseList(ListNode* &head) {
       ListNode * curr = head;
       ListNode* prev = NULL;
       reverseLL(head, prev , curr);
       return head;
        
       
    }
};
