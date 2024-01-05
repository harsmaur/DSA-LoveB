#include<iostream>
using namespace std;

int main()
{
    int *a = new int;

    // creating array dynamically

    int* arr = new int[5];
    
    char* ch = new char;

    //create a varibale size array 
    int n;
    cin>> n;

    int *arr1 = new int[n];

    for(int i = 0; i<n; i++){
        cin>>arr1[i];
    }

    cout<<"Printing values"<<endl;
       for(int i = 0; i<n; i++){
        cout<<arr1[i];
    }



   //releasing memory
   delete[] arr1;
    cout<<"Printing values after deleting the heap m/m prints garbage values"<<endl;
       for(int i = 0; i<n; i++){
        cout<<arr1[i];
    }
    return 0;
}