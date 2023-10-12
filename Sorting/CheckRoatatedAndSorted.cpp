#include<iostream>
using namespace std;
// count = 0 means sorted 
// count = 1 means soretd and rotated so for both these constions return true
bool CheckSortedRotated(int arr[], int n){
    int count = 0; // initialized count to zero 
    
    for(int i=1 ; i< n; i++){
        if(arr[i-1] > arr[i]){    //check if ascending order of the sorted array breaks if breaks increment the counter by 1;
            count++;
        }

        //check for the last element
        
    }
    if(arr[n-1] > arr[0]){ 
            count++;
        }
        return count<=1;
    
}
int main()
{
     int arr[6] = {1,2,3,4,5,6};
    int n = 6;
   cout<< CheckSortedRotated(arr, n);

    
    return 0;
}