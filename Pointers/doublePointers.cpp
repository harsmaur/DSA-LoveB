#include<iostream>
using namespace std;




int main()
{
     int i = 5;
     int *ptr = &i;

     //double pointer
     int **ptr2 = &ptr;

     cout<<"Printing ptr "<< ptr<<endl;  // content of ptr
     cout<< "address of ptr "<< &ptr <<endl; //address of ptr
     
     cout<<ptr2<<endl; //prints address of ptr
     cout<<*ptr2<<endl; //prints the content of ptr
     
     cout<<i<<endl; //prints value of i
     cout<<*ptr<<endl; //prints the value of i
     cout<<**ptr2<<endl; // prints the value of i 
    return 0;
}
