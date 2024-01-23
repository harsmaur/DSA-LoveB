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

    ListNode* solve(ListNode* list1, ListNode* list2){

        //if only one element is present in fist list
        // if only one elemeent in list1 we will not be able to enter into    the     loop its edge case
         if(list1->next == NULL){
             list1->next = list2;
             return list1;
         }

      ListNode* curr1 = list1;
      ListNode* next1 = curr1->next;
      ListNode* curr2 =  list2;
      ListNode* next2 = curr2->next;

      while(next1 != NULL && curr2 != NULL){
          if((curr2->val >= curr1->val) && curr2->val <= next1->val){
               //new connections
               curr1->next = curr2;

               //store the next pointer of curr2 in next2
               next2 = curr2->next;
               // new connections
               curr2->next = next1;

               //increment the pointers 
               curr1 = curr2;
               curr2 = next2;
          }
          else{
              //cuur1 or next1 ko aage badhana padega
              curr1 = next1;
              next1 = next1->next;

              if(next1 == NULL){ // if next1 becomes null append the remaining  list2 to list1 
                  curr1->next = curr2;
                  return list1;
              }

          }
      }
      return list1;

    }


    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        if(list1 == NULL){
            return list2;
        }
        if(list2 == NULL){
            return list1;
        }
         // make list1 to that lisst whose frist value is lesser
        if(list1->val <= list2->val){
          return  solve(list1, list2);
        }
        else{
           return solve(list2, list1);
        }
    }
};