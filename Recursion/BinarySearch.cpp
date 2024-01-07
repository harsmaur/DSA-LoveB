#include<iostream>
using namespace std;

bool binarySearch(int * arr, int key, int s, int e){
// base case not found key
    if(s>e){
        return false;
    }
// base case Found key
    int mid = s+(e-s)/2;


    if(arr[mid] == key){
        return true;
    }

    if(key > arr[mid]){
        //go to right part
      return  binarySearch(arr, key, mid+1, e);
    }
    else{
        //go to left part
      return  binarySearch(arr, key, s, mid-1);
    }
}


int main()
{
   int arr[8]= {2,4,6,8,11,34,36,42};

   int size = 8;

   int key = 24;

   bool ans = binarySearch(arr, key, 0, 7);

   if(ans){
    cout<<"Found"<<endl;
   }
   else{
    cout<<"Not Found"<<endl;
   }

     return 0;
}