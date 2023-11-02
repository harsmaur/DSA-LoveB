#include<iostream>
using namespace std;

void BubbleSort(int arr[], int n ){
    
    int isSorted = false;
    
    for(int i=0; i< n; i++){

        isSorted = true; //until theres is not comaprison

        for(int j = 0; j< n-i; j++){

            if(arr[j] > arr[j+1]){
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;

                isSorted = false; // simce we are insie the comparison loop it means array is not sorted laready
                
            }
        }
        if(isSorted){
            break;
        }
    }
}

int main()
{
    int arr[7] = {3,12,6,21,3,176,4};
    BubbleSort(arr, 7);

  for(int i=0; i< 7; i++){
    cout<<arr[i]<<endl;
  }
    
    return 0;
}