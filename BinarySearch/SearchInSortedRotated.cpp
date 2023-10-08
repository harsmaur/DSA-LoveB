#include<iostream>
using namespace std;

int PivotElement(vector<int>& arr, int n) {
    int s = 0;
    int e = n - 1;
     int mid = s + (e - s) / 2;
    while (s < e) {
        
        
        if (arr[mid] >= arr[0]) {
            s = mid + 1;
        } else {
            e = mid;
        }
         mid = s + (e - s) / 2;
    }
    
    return s;
}

int BinarySearch(vector<int>& arr, int s, int e, int key){
    // int start = s;
    // int end = e;
    int mid = s+(e-s)/2;

    while(s<=e){
        if(arr[mid] == key){
            return mid;

        }
        else if(key > arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
         mid = s+(e-s)/2;
    }
    return -1;
}

int search(vector<int>& arr, int n, int k)
{
    int pivot = PivotElement(arr, n); 
    //condition to check 
    if(k >= arr[pivot] && k <= arr[n-1]){
        //go to second line
        return BinarySearch(arr, pivot, n-1, k );
    }
    else {
        //go to first line and do bs
        return BinarySearch(arr, 0, pivot-1, k);
    }
    // Write your code here.
    // Return the position of K in ARR else return -1.
}
