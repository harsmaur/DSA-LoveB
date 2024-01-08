#include<iostream>
using namespace std;

void SelectionSort(int *arr, int size){

    if(size == 0 || size == 1){
        return;
    }

      int indexofMin = 0;
      int min = INT32_MAX;

    for(int i = 0; i< size; i++){
           if(arr[i] < min){
            min = arr[i];
            indexofMin = i;
           }
    }
    swap(arr[0], arr[indexofMin]);
    
    SelectionSort(arr+1, size-1);
}


int main()
{
    
    int arr[7] = {3,12,6,21,3,176,4};
    SelectionSort(arr, 7);

  for(int i=0; i< 7; i++){
   
    cout<<arr[i]<<endl;
  }
    
    return 0;
}