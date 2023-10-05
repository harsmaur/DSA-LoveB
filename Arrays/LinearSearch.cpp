
#include<iostream>
using namespace std;


int linearSerach(int arr[], int size, int key){
 for(int i=0; i<size; i++){
    if(arr[i] == key){
        return i;
    }
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
    int key;
    cout<<"Enter key to be searched"<<endl;
    cin>>key;

    cout<<linearSerach(arr, size, key);
    
    return 0;
}