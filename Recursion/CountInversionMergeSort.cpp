#include<iostream>
using namespace std;
long long merge(int *arr, int s, int e){
    long long inv = 0;
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

        if(first[index1] <= second[index2]){   //<= because if the element is equal elements from the two subarrays are equal.
            arr[mainArrayIndex] = first[index1];
            mainArrayIndex++;
            index1++;
        }
        else{
            arr[mainArrayIndex] = second[index2];
            mainArrayIndex++;
            index2++;
            //add inversions
            inv += len1-index1;
            
        }
       
    }
    
    // Copy the remaining elements of
    // left[], if there are any
    while(index1 < len1){
        arr[mainArrayIndex++] = first[index1++];
    }
   
   // Copy the remaining elements of
    // right[], if there are any
    while(index2 < len2){
        arr[mainArrayIndex++] = second[index2++];
    }

   delete[] first;
   delete[] second;
    return inv;

}



long long mergeSort(int *arr, int s, int e){
    long long inv = 0;
    //base condition
    if(s>=e){
        return 0;
    }

    int mid = (s+e)/2;

    //sort left part
   inv += mergeSort(arr, s, mid);

    ///sort right part
   inv += mergeSort(arr, mid+1, e);

    //merge the sorted arrays
   inv += merge(arr, s, e);
    return inv;

}
int main()
{
       int arr[19] ={15, 28, 11, 20, 14, 7, 14, 2, 15, 4, 22, 19, 17, 1, 26, 6, 20, 2, 6 };
    int n = 19;
    int start = 0;
    int end = n-1;


   long long ans =  mergeSort(arr, start, end);
   cout<<ans<<endl;
    return 0;
}