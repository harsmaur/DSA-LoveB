#include <queue>
#include <vector>
using namespace std;

// Function to determine the relationship between two sizes
int signum(int a, int b){
    if(a == b){
        return 0;  // Both heaps have the same number of elements
    }
    else if(a > b){
        return 1;  // Max heap has more elements
    } else {
        return -1; // Min heap has more elements
    }
}

// Function to update the median after adding a new element
void callMedian(int element, priority_queue<int> &maxi, priority_queue<int, vector<int>, greater<int>> &mini, int &median) {
    // Determine the relative sizes of the heaps and balance them
    switch(signum(maxi.size(), mini.size())) {
        case 0: // Both heaps are of the same size
            if(element > median) {
                mini.push(element); // Add to min heap
                median = mini.top(); // Update median
            } else {
                maxi.push(element); // Add to max heap
                median = maxi.top(); // Update median
            }
            break;
        case 1: // Max heap has more elements
            if(element > median) {
                mini.push(element); // Add to min heap
            } else {
                mini.push(maxi.top()); // Move top of max heap to min heap
                maxi.pop();
                maxi.push(element); // Add new element to max heap
            }
            median = (mini.top() + maxi.top()) / 2; // Update median
            break;
        case -1: // Min heap has more elements
            if(element > median) {
                maxi.push(mini.top()); // Move top of min heap to max heap
                mini.pop();
                mini.push(element); // Add new element to min heap
            } else {
                maxi.push(element); // Add to max heap
            }
            median = (mini.top() + maxi.top()) / 2; // Update median
            break;
    }
}

// Function to find the median of the elements in the array
vector<int> findMedian(vector<int> &arr, int n) {
    // Max heap for the lower half
    priority_queue<int> maxHeap;
    // Min heap for the upper half
    priority_queue<int, vector<int>, greater<int>> minHeap;

    int median = 0; // Initialize median
    vector<int> ans; // Vector to store the medians

    // Iterate through the array
    for(int i = 0; i < n; i++) {
        // Update the heaps and median
        callMedian(arr[i], maxHeap, minHeap, median);
        // Store the current median
        ans.push_back(median);
    }

    return ans; // Return the list of medians
}
