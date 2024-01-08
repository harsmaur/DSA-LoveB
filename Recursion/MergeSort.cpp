#include<iostream>
using namespace std;

void merge(int *arr, int s, int e){
    //find the mid
    int mid = (s+e)/2;

    //to create  two subaarys find the length of the subarrays
    int len1 = mid - s + 1;
    int len2 = e - mid;

    //create two arrays 
    int *first = new int[len1];
    int *second = new int[len2];

    //copy values 
    int mainArrayIndex = s;

    for(int i =0; i < len1; i++){
        first[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }


    for(int i =0; i < len2; i++){
        second[i] = arr[mainArrayIndex];
        mainArrayIndex++;
    }

    //merge the sorted arrays
    int index1 = 0;
    int index2 = 0;
    mainArrayIndex = s;

    while(index1 < len1 && index2 < len2){

        if(first[index1] < second[index2]){
            arr[mainArrayIndex] = first[index1];
            mainArrayIndex++;
            index1++;
        }
        else{
            arr[mainArrayIndex] = second[index2];
            mainArrayIndex++;
            index2++;
        }
    }
    
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }
   
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

   delete[] first;
   delete[] second;

}



void mergeSort(int *arr, int s, int e){
    //base condition
    if(s>=e){
        return;
    }

    int mid = (s+e)/2;

    //sort left part
    mergeSort(arr, s, mid);

    ///sort right part
    mergeSort(arr, mid+1, e);

    //merge the sorted arrays
    merge(arr, s, e);

}

int main()
{
    
    int arr[15] ={3,7,0,1,5,8,3,2,34,66,87,23,12,12,12};
    int n = 15;
    int start = 0;
    int end = n-1;


    mergeSort(arr, start, end);

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    } cout << endl;


    return 0;
}