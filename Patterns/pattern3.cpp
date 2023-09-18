#include <iostream>
using namespace std;

int p1(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {
        int j = 1; //for number of columns
        while(j<=n){
            cout<<j;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;}
    

int p2(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {
        int j = n; //for number of columns
        while(j>=1){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
int p3(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    int count = 1;
    while (i <= n)
    { 
        int j = 1; //for number of columns
        while(j<=n){
            cout<<count <<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

int p4(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {
        int j = 1; //for number of columns
        while(j<=i){
            cout<<"*";
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

int p5(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    {
        int j = 1; //for number of columns
        while(j<=i){
            cout<<i;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

int p6(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    int count = 1;
    // i for number of rows
    while (i <= n)
    {
        int j = 1; //for number of columns
        while(j<=i){
            cout<<count<<" ";
            count++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}


//with variable value
int p7(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    { 
        int value = i;
        int j = 1; //for number of columns
        while(j<=i){
            cout<<value<<" ";
            value++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
//without variable value
int p7b(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    { 
        int value = i;
        int j = i; //for number of columns
        while(j<=2*i){
            cout<<j<<" ";
            
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}
int main()
{

//  p1();
//  p2();
// p3();
// p4();
// p5();
// p6();
// p7();
p7b();
    return 0;
}