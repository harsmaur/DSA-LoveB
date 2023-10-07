//works only on monotonic arrays 
#include<iostream>
using namespace std;

void PrintArray(int arr[], int size){
     for(int i =0; i<size; i++){
        cout<<arr[i]<<" ";
    }


}
int BinarySearch(int arr[], int size, int key){

    int low = 0;
    int high = size-1;
    int mid = (low+(high-low)/2);

    while(low<=high){
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid] ){
            low = mid+1;
        }
        else{
            high = mid-1;
        }
       mid = (low+(high-low)/2);
    }
    return -1;
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
   cout<<"Enter Key"<<endl;
   int key;
   cin>>key;

    PrintArray(arr, size);
   cout<<"Found at index"<<" "<< BinarySearch(arr, size, key);

    
    return 0;
}