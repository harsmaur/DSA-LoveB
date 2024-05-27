/*
Following is the class structure of the Node class:

class Node
{
public:
    int data;
    Node *next;
    Node()
    {
        this->data = 0;
        next = NULL;
    }
    Node(int data)
    {
        this->data = data; 
        this->next = NULL;
    }
    Node(int data, Node* next)
    {
        this->data = data;
        this->next = next;
    }
};
*/

class compare {
public:
    // Comparator to be used in the priority queue (min-heap)
    // It ensures the node with the smaller data value has higher priority
    bool operator()(Node* a, Node* b) {
        return a->data > b->data;
    }
};

Node* mergeKLists(vector<Node*>& listArray) {
    // Min-heap to store the nodes, with custom comparator defined above
    priority_queue<Node*, vector<Node*>, compare> minHeap;

    int k = listArray.size();
    if (k == 0) {
        return NULL; // If there are no linked lists, return NULL
    }

    // Step 1: Push the head nodes of all the non-empty linked lists into the min-heap
    for (int i = 0; i < k; i++) {
        if (listArray[i] != NULL) {
            minHeap.push(listArray[i]);
        }
    }

    Node* head = NULL; // Head of the merged linked list
    Node* tail = NULL; // Tail of the merged linked list

    // Process the nodes in the min-heap until it is empty
    while (minHeap.size() > 0) {
        // Extract the node with the smallest data value
        Node* top = minHeap.top();
        minHeap.pop();

        // If the extracted node has a next node, push it into the min-heap
        if (top->next != NULL) {
            minHeap.push(top->next);
        }

        // If the merged linked list is empty, initialize it with the extracted node
        if (head == NULL) {
            head = top;
            tail = top;
        } else { // Otherwise, append the extracted node to the merged linked list
            tail->next = top;
            tail = top;
        }
    }

    return head; // Return the head of the merged linked list
}
