#include<iostream>
using namespace std;
void insertionSort(int* arr, int n, int i) {
    // Base case: if i reaches the end of the array or if the array has 0 elements
    if (i == n || n == 0) {
        return;
    }
    
    // Store the value at arr[i] in x and initialize inx to i
    int x = arr[i];
    int inx = i;

    // Finding the correct position (inx) for x in the sorted part of the array
    for (int j = i - 1; j >= 0; j--) {
        if (arr[j] > x) {
            inx = j; // Update inx if the current element is greater than x
        }
    }
    
    // Shifting elements to the right to make space for x at index inx
    for (int j = i; j > inx; j--) {
        arr[j] = arr[j - 1]; // Move elements one position to the right
    }
    
    // Place x at the correct position inx
    arr[inx] = x;
    
    // Recursive call to sort the next element in the array
    insertionSort(arr, n, ++i);
}
int main()
{
     int arr[7] = {3, 12, 6, 21, 3, 176, 4};
    insertionSort(arr, 7, 1);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}
