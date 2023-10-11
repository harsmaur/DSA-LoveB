#include <iostream>
using namespace std;

void InsertionSort(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int temp = arr[i];
        int j = i - 1; // j is running reverse from i-1 to 0

        for (; j >= 0; j--)
        { // Inner loop to find the correct position for the current element by comparing it with the previous elements.
            if (arr[j] > temp)
            { // If the previous element is greater than the current element, shift the previous element to the right.

                arr[j + 1] = arr[j]; // If the condition is true, it shifts the element at index 'j' one position to the right in the array.
            }
            else
            {
                break; // nothing to do as element is already greater then temp
            }
        }
        arr[j + 1] = temp; // insert the element that shifted position
    }
}
int main()
{

    int arr[7] = {3, 12, 6, 21, 3, 176, 4};
    InsertionSort(arr, 7);

    for (int i = 0; i < 7; i++)
    {
        cout << arr[i] << endl;
    }
    return 0;
}