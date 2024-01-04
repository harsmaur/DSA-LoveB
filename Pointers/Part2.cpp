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
    return 0;
}