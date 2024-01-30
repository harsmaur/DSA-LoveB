#include <bits/stdc++.h>

// Function to insert an element 'num' in a sorted manner into the stack
void sortedInsert(stack<int> &stack, int num) {
    // Base case: If the stack is empty or the top value is less than 'num'
    // Insert 'num' at the top of the stack
    if (stack.empty() || (!stack.empty() && stack.top() < num)) {
        stack.push(num);
        return;
    }

    // Recursive case: Pop the top element, insert 'num' into the remaining stack,
    // and then push back the popped element to maintain the sorted order
    int n = stack.top();
    stack.pop();

    sortedInsert(stack, num);

    stack.push(n);
}

// Function to sort the stack using recursive calls
void sortStack(stack<int> &stack) {
    // Base case: If the stack is empty, no sorting needed
    if (stack.empty()) {
        return;
    }

    // Recursive case: Pop the top element, sort the remaining stack,
    // and then insert the popped element back in sorted order
    int num = stack.top();
    stack.pop();

    sortStack(stack);

    sortedInsert(stack, num);
}

int main() {
    // Example usage
    stack<int> myStack;
    
    // Push elements onto the stack (unsorted)
    myStack.push(30);
    myStack.push(-5);
    myStack.push(18);
    myStack.push(14);
    myStack.push(-3);

    // Display the unsorted stack
    std::cout << "Original Stack: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    std::cout << "\n";

    // Push elements again for sorting
    myStack.push(30);
    myStack.push(-5);
    myStack.push(18);
    myStack.push(14);
    myStack.push(-3);

    // Sort the stack
    sortStack(myStack);

    // Display the sorted stack
    std::cout << "Sorted Stack: ";
    while (!myStack.empty()) {
        std::cout << myStack.top() << " ";
        myStack.pop();
    }
    std::cout << "\n";

    return 0;
}
