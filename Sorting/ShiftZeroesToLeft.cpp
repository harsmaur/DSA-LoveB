#include<iostream>
#include<algorithm>
using namespace std;

void ShiftZeroes(int arr[], int n){
    int NonZeroIndex = 0;
    for(int j =0; j< n; j++){
        if(arr[j] != 0){
           swap(arr[NonZeroIndex] , arr[j]);
            NonZeroIndex++;
        }
    }
}

void Print( int arr3[], int size){
    for(int i=0; i<size; i++){
        cout<<arr3[i]<<endl;
    }
}

int main()
{
    int arr[8] = {0,2,0,35,0,3,0,2};
ShiftZeroes(arr, 8);
Print(arr, 8);
    
    return 0;
}