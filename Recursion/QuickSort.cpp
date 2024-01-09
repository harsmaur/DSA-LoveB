#include<iostream>
using namespace std;

// Function to partition the array around a pivot element
int Partition(vector<int> &arr, int s, int e){
    int pivot = arr[s];  // Selecting the pivot element (first element in the range)
    int i = s + 1;       // Index to traverse elements from the left side of the array
    int j = e;           // Index to traverse elements from the right side of the array

    // Loop to partition the array based on the pivot
    do {
        // Move 'i' to the right until it finds an element greater than the pivot
        while (i <= j && arr[i] <= pivot) {
            i++;
        }
        
        // Move 'j' to the left until it finds an element smaller than the pivot
        while (i <= j && arr[j] > pivot) {
            j--;
        }
        
        // If elements found at 'i' and 'j' are in the wrong order, swap them
        if (i < j) {
            swap(arr[i], arr[j]);
        }
    } while (i <= j); // Continue until 'i' crosses 'j'

    // Swap pivot with the element at index 'j' (to place the pivot in its correct position)
    swap(arr[j], arr[s]);

    // Return the index of the pivot element after partitioning
    return j;
}

// Function implementing the Quick Sort algorithm
void quickSort(vector<int> &arr, int s, int e){
    if (s >= e) {
        return; // Base case: If the start index is greater than or equal to the end index, return
    }

    // Partition the array and get the index of the pivot element
    int partIndex = Partition(arr, s, e);
    
    // Recursive calls to sort the partitions
    quickSort(arr, s, partIndex - 1); // Sort the left partition
    quickSort(arr, partIndex + 1, e); // Sort the right partition
}

// Wrapper function for Quick Sort, returning the sorted vector
vector<int> quickSort(vector<int> arr) {
    quickSort(arr, 0, arr.size() - 1); // Call the Quick Sort function with the entire array
    return arr; // Return the sorted array
}
