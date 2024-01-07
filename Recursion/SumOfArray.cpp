#include<iostream>
using namespace std;

int arraySum(int *arr, int size){
    if(size == 0){
        return 0;
    }

    return arr[size-1] + arraySum(arr, size-1);
   
}
int main(){ 

    int arr[5] = {1,2,7,8,8};
    int size= 5;

    int sum = arraySum(arr, size);
    cout<<"Sum of array is "<<sum<<endl;
    
    return 0;
}