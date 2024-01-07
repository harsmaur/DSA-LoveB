#include<iostream>
using namespace std;

int arraySum(int *arr, int size){
    if(size == 0){
        return 0;
    }
    if(size == 1){
        return arr[0];
    }

    return arr[size-1] + arraySum(arr, size-1);
   
}

//love b way
int getSum(int *arr, int size){
    if(size==0){
        return 0;
    }
    if(size == 1)
    return arr[0];

    int remainingPart = getSum(arr+1, size-1);
    int sum = arr[0] + remainingPart;
    return sum;

}
int main(){ 

    int arr[5] = {1,2,7,8,8};
    int size= 5;

    int sum = arraySum(arr, size);
    int get_sum = getSum(arr, 5);
    cout<<"Sum of array is "<<sum<<endl;
    cout<<"Sum of array is "<<get_sum<<endl;
    
    return 0;
}