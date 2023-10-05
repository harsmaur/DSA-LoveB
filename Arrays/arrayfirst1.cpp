#include<iostream>
using namespace std;


void printArray(int arr[], int size){
  
    for(int i =0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}
void printArraychar(char arr[], int size){
  
    for(int i =0; i<size; i++){
        cout<<arr[i]<<endl;
    }
}
int main()
{
    int arr[50] = {0}; 
    //initializing to a same value
    cout<<arr[49];

    int arr2[30];
    std::fill_n(arr2, 30, 67);
    //initializing to a specific value
   
   printArray(arr2, 30);
    
    char ch[5] = {'a', 'b', 'c', 'd', 'e'};
    printArraychar(ch, 5);

    return 0;
}