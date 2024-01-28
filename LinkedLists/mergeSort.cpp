#include<iostream>
using namespace std;


    // Following is the representation of the Singly Linked List Node:

    class node {
    public:
        int data;
        node * next;
        node(int data) {
            this->data = data;
            this->next = NULL;
        }
    };
    


// Function to find the middle of the linked list using the fast and slow pointer approach
node * FindMid(node * head) {
    node * fast = head->next;
    node * slow = head;

    // Move fast pointer two steps at a time, and slow pointer one step at a time
    while (fast != NULL && fast->next != NULL) {
        fast = fast->next->next;
        slow = slow->next;
    }

    // Return the middle node
    return slow;
}

// Function to merge two sorted linked lists
node * merge(node* left, node* right) {
    if (left == NULL) {
        return right;
    }
    if (right == NULL) {
        return left;
    }

    // Create a dummy node to simplify merging
    node * ans = new node(-1);
    node * temp = ans;

    // Merge two sorted linked lists
    while (left != NULL && right != NULL) {
        if (left->data < right->data) {
            temp->next = left;
            temp = left;
            left = left->next;
        } else {
            temp->next = right;
            temp = right;
            right = right->next;
        }
    }

    // Append remaining nodes if any
    while (left != NULL) {
        temp->next = left;
        temp = left;
        left = left->next;
    }

    while (right != NULL) {
        temp->next = right;
        temp = right;
        right = right->next;
    }

    // Move to the actual starting node
    ans = ans->next;
    return ans;
}

// Recursive function to perform merge sort on a linked list
node* mergeSort(node *head) {
    // Base case: If the list is empty or has only one node, it is already sorted
    if (head == NULL || head->next == NULL) {
       return head;
    }
     
    // Find the middle of the linked list
    node * mid = FindMid(head);

    // Divide the linked list into two halves
    node * left = head;
    node * right = mid->next;
    mid->next = NULL;

    // Recursively sort both halves
    left = mergeSort(left);
    right = mergeSort(right);

    // Merge the sorted halves
    node * result = merge(left, right);

    // Return the sorted linked list
    return result;
}
