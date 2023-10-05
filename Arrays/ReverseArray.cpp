#include<iostream>
using namespace std;

void ReverseArray(int arr[], int size){
    int start = 0;
    int end = size-1;
   
   while(start<=end){
    swap(arr[start], arr[end]);
    start++;
    end--;
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
    
    ReverseArray(arr, size);
    PrintArray(arr, size);
   
    
    return 0;
}