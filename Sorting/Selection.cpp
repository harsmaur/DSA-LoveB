#include<iostream>
using namespace std;

void SelectionSort(int arr[], int n){
    for(int i =0; i< n-1; i ++){
        int indexOfMin = i;
          
          for(int j= i+1; j< n; j++){
            if(arr[j] < arr[indexOfMin]){
                indexOfMin = j;
            }
          }
          int temp = arr[i];
          arr[i] = arr[indexOfMin];
          arr[indexOfMin] = temp;
    }
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