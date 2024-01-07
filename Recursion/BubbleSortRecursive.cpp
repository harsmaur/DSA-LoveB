#include<iostream>
using namespace std;

void buubleSort(int *arr, int size){
    //base case
    if(size == 0){
        return;
    }
    if(size == 1){
        return ;
    }
  
  //1 case solved karlia - largest element at the end me rkh lia
  for(int i=0; i < size-1; i++){
      if(arr[i] > arr[i+1]){
           swap(arr[i], arr[i+1]);
    }
  }
    
    //remianing k liye r c
   buubleSort(arr, size-1);

}
int main()
{
    int arr[8]= {5,2,8,2,4,3,673,2};
    int size = 8;

    buubleSort(arr, 8);
      for(int i=0; i < size; i++){
        cout<<arr[i]<<" ";
      }
    
    return 0;
}