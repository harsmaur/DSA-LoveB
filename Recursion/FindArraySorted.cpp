#include<iostream>
using namespace std;


bool isSorted(int *arr, int size){
    if(size == 0 || size == 1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }
    else{
        bool ans = isSorted(arr+1, size-1);
        return ans;
    }
    
}
int main()
{
    //  int arr[5] = {1,2,47,8,8};
    int arr[5] = {1,2,7,8,8};
    int size= 5;

    bool ans = isSorted(arr, size);
    if(ans){
       cout<<"Array is Sorted"<<endl;
    }
    else{
        cout<<"Array is not sorted"<<endl;
    }
   
    return 0;
}