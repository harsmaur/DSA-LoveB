#include <iostream>
#include <limits.h>
using namespace std;

int getMax(int arr[], int size)
{
    int max = INT_MIN;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
        }
    }
    return max;
}

int getMin(int arr[], int size)
{
    int min = INT_MAX;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
        }
    }
    return min;
}

void changearrValue(int arr[], int size)
{
    cout << "inside the changeValue  fucntion " << endl;

    arr[0] = 120;
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }

    cout << "Leaving the function moving to the main function" << endl;
}

int main()

{
    int size;
    cout << "Enter size" << endl;
    cin >> size;
    int arr[100];

    cout << "Enter Elements" << endl;
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }

    cout << "Min" << getMin(arr, size) << endl;
    cout << "Max" << getMax(arr, size) << endl;

    int arr2[3] = {1, 2, 3};
    changearrValue(arr2, 3);
    cout<<"The value is changed even in the main function"<<endl;
     for (int i = 0; i < 3; i++)
    {
        cout << arr2[i] << " ";
    }
    

    return 0;
}