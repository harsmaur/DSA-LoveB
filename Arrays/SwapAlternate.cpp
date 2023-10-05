#include<iostream>
using namespace std;

void SwapAlternate(int arr[], int size){
  for(int i =0; i<size; i+=2){
    if(i+1 < size){
        swap(arr[i], arr[i+1]);
    }
  }

}

void PrintArray(int arr[], int size){
     for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
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
    
    SwapAlternate(arr, size);
    PrintArray(arr, size);
   
    
    return 0;
}