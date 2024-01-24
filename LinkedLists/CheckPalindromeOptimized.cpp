#include<iostream>
using namespace std;
//find the middle element
// reverse after the middle element
//comapre the halves
class Solution{

    public:
    Node * getMid(Node* head){
        Node * fast = head->next;
        Node * slow = haed;
        while(fast!= NULL && fast->next !=NULL){
            fast = fast->next->next;
            slow = slow->next;
        }
       return slow;
    }
    
    Node * reversed(Node * temp){
        Node * curr = head;
        Node * prev = NULL;
        Node * next = NULL

        while(curr != NULL){
            next = curr->next;
            curr->next = prev;
            prev = curr;
            curr = next;

        }
        return prev;
    }

    bool palindrome(Node * head){
       //edge cases
       if(head == Null || head->next == NULL){
        return true;
       }

       Node * mid = getMid(head);
           
        Node * temp = mid->next;

        mid->next = reversed(temp);

        //compare
        Node * head1 = head;
        Node* head2 = mid->next;

        while(head2 !=NULL){
            if(head1->data != head2->data){
                return false;
            }
            head1 = head1->next;
            head2 = head2->next;
        }
        

         // step4 restore the list (optional)
        temp = mid->next;
        mid->next = reversed(temp);


        return true;



    }

};

