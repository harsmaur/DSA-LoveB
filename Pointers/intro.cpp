#include<iostream>
using namespace std;


int main()
{
    int num = 5;
    cout<<"Address of num is "<< &num <<endl;

    //Pointers stores this type of address

    int *ptr = &num;

    //vaue at adress p using derefernce operator
    cout<<*ptr;


    double d = 4.3;

    double *p2 = &d;

    cout<<"Size of int is "<<sizeof(num)<<endl;
    cout<<"Size of int Pointer is "<<sizeof(ptr)<<endl;

    
    num++;
    cout<<"Value of num is "<<num<<endl;

    //incrementing value using the pointer
    (*ptr)++; 
    cout<<"Value of num is "<<*ptr<<endl;


    //copying pointer to a new pointer
    int *q = ptr;

    cout<<"adrress of ptr is "<<ptr<<endl;
    cout<<"address of q is "<<q<<endl;

    cout<<"value of ptr is "<<*ptr<<endl;
    cout<<"value of q is "<<*q<<endl;

    //important concept
    *ptr = *ptr+1;
    cout<<*ptr<<endl;

     cout<<"Ptr before  + 1 "<<ptr<<endl;

     ptr = ptr + 1;
     cout<<"Ptr after + 1 "<<ptr<<endl;
    return 0;
}