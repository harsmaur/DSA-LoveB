#include<iostream>
using namespace std;


void update(int **p){
    // p = p+1;
    //kuch change hoga hi nhi 


    // *p = *p+1;
    //kuch change hoga
   //content of p is changed

    **p = **p+1;
    //kuch change hoga
    //value of i will be changed
}

int main()
{
    int i = 5;

    int *p = &i;

    int **p2 = &p;

    cout<<"Before "<<i<<endl;
    cout<<"Before "<<p<<endl;
    cout<<"Before "<<p2<<endl;

    update(p2);

    cout<<"After "<<i<<endl;
    cout<<"After "<<p<<endl;
    cout<<"After "<<p2<<endl;
    return 0;
}