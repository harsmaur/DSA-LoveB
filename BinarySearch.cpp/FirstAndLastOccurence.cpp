#include<iostream>
using namespace std;
 

int first_Occurence(int arr[], int n, int key){
  int s = 0;
  int e = n-1;

  int ans = -1;

  while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid] == key){
      ans = mid;
      e = mid-1;
    }
    else if( key > arr[mid]){
         s = mid+1;
    }
    else{
         e = mid-1;
    }
      
  }
  return ans;
}


int last_Occurence(int arr[], int n, int key){
  int s = 0;
  int e = n-1;
  
  int ans = -1;
  while(s<=e){
    int mid = s+(e-s)/2;
    if(arr[mid] == key){
      ans = mid;
      s = mid+1;
    }
    else if( key > arr[mid]){
         s = mid+1;
    }
    else{
         e = mid-1;
    }
    
  }
  return ans;
}

int main()

{
 
    int arr[8] = {1,2,3,4, 4,4, 9, 10};
    int first = first_Occurence(arr, 8 , 4);
    int last = last_Occurence(arr, 8, 4);
  
    cout<<"First and last occ of 4 is  "<<first<<" "<<last<<endl;
    return 0;
}