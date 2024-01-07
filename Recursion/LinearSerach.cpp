#include<iostream>
using namespace std;


bool linearSearch(int *arr, int key, int size){
    //basec
    if(size == 0){
        return false;
    }
    
    if(arr[0] == key){
        return true;
    }

    else{
        bool remainingPart = linearSearch(arr+1, key, size-1);
        return remainingPart;
    }
   

}
int main()
{
      int arr[5] = {1,2,7,8,8};
      int size= 5;
      int key;
      cin>>key;

    int ans = linearSearch(arr,key, size);
    if(ans){
        cout<<"Present"<<endl;
    }
    else{
        cout<<"Not Found"<<endl;
    }
    return 0;
}