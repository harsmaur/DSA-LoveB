#include<iostream>
using namespace std;

int main()
{
    int arr[10] = {01,11,22,33,44,55,66,77,88,99};

    //adress of first block of the array
    cout<<"Adress of first m/m block is "<<arr<<endl;

    cout<<"Adress of first m/m block is "<<&arr[0]<<endl;

    //value at first location 
    cout<<"value of first m/m block is "<<*arr<<endl;

    cout<<"value of second m/m block is "<<*(arr+1)<<endl;

    cout<<"value of third m/m block is "<<*(arr+2)<<endl;

    cout<<"value of fourth m/m block is "<<*(arr+3)<<endl;

    cout<<"value at first location + 2 m/m block is "<<*(arr)+2<<endl;
 

    cout<<5[arr]<<endl;


    int *p = &arr[0];
    //size of pointer and array )integers
    cout<<"Size of array "<<sizeof(arr)<<endl;
    cout<<"Size of pointer "<<sizeof(p)<<endl;

    cout<<"Size of *array "<<sizeof(*arr)<<endl;
    cout<<"Size of *pointer "<<sizeof(*p)<<endl;

    cout<<"Size of &array "<<sizeof(&arr)<<endl;
    cout<<"Size of &pointer "<<sizeof(&p)<<endl;



    int a[20] = {1,2,3,4};

    cout<< &a[0] <<endl;
    cout<< a <<endl;
    cout<< &a <<endl;
    
    int *p2 = &a[0];

    cout<< p2 <<endl; // adress of p pointing to 
    cout<< *p2 <<endl;
    cout<< &p2 <<endl; //address of p 




     // symbol table content cant be changed
     int brr[10];

     //Error
    //  brr = brr+1; 

     int *ptr = &brr[0];

     cout<< ptr <<endl;
     ptr = ptr + 1;
     cout<< ptr << endl;





    return 0;
}