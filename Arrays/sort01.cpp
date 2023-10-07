#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){
     for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }


}

void SortOneZero(int arr[], int n){
    int left = 0;
    int right = n-1;

    while(left < right){


        if(arr[left] == 0){
         left++;
        }
        else if(arr[right] == 1){

            right--;
        }
        // means both are
        swap(arr[left], arr[right]);
        left++;
        right--;

    }
}
int main()
{
    
     int arr[100];
     int size;
     cout<<"Enter Size"<<endl;
     cin>>size;
   
    cout<<"Enter array elements"<<endl;
 
    for(int i =0; i<size; i++){
        cin>>arr[i];
    }

    SortOneZero(arr, size);
    PrintArray(arr, size);

    
    return 0;
}