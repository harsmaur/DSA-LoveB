#include<iostream>
using namespace std;


void print(int *p){
    cout<< p <<endl;  //prints address
    cout<< *p << endl; //prints the value
}

//pass by value
void ValueUpdate(int *p){
    *p = *p+1;
}

int main()
{
    int value = 5;
    int *p = &value;
    // print(p);
    cout<<"Before p "<<*p<<endl;
    ValueUpdate(p);
    cout<<"After p "<<*p<<endl;
    return 0;
}