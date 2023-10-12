#include<iostream>
#include<vector>
using namespace std;

void merge(int arr1[], int n, int arr2[],int m, int arr3[], int q){
    int i =0, j=0, k=0;
    //compare
    while(i<n && j< m){
        if(arr1[i]< arr2[j]){
            arr3[k++] = arr1[i++];
        }
        else{
            arr3[k++] = arr2[j++];
        }
    }
    //copy remaining from array 1

    while(i<n){
        arr3[k++] = arr1[i++];
    }

     //copy remaining from array 2

    while(i<n){
        arr3[k++] = arr2[j++];
    }

   
}
void Print( int arr3[], int size){
    for(int i=0; i<size; i++){
        cout<<arr3[i]<<endl;
    }
}

int main()
{
   int arr1[5] = {1,3,5,7,9};
   int arr2[5] = {2, 3,5,10, 11};
   int arr3[10] = {0};

   merge(arr1,5,  arr2,5 , arr3, 10);
   Print(arr3, 10);
    return 0;
}
