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

int p8(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    { 
        
        int j = 1; //for number of columns
        while(j<=i){
            cout<<i-j+1<<" ";
            
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

int p9(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    { 
       
        int j = 1; //for number of columns
       
        while(j<=n){
            char ch = 'A'+i-1;
            cout<<ch;
            
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

int p10(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    { 
       
        int j = 1; //for number of columns
       
        while(j<=n){
            char ch = 'A'+j-1;
            cout<<ch;
            
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

int p11(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    char start = 'A';
    while (i <= n)
    { 
       
        int j = 1; //for number of columns
       
        while(j<=n){
            
            cout<<start;
            start++;
            j++;
        }
        cout<<endl;
        i++;
    }
    return 0;
}

int p12(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    { 
       
        int j = 1; //for number of columns
       
        while(j<=n){
            char ch = 'A'+i+j-2;
            cout<<ch;
            
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}
int p13(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    // i for number of rows
    while (i <= n)
    { 
       
        int j = 1; //for number of columns
       
        while(j<=i){
            char ch = 'A'+i-1;
            cout<<ch;
            
            j++;
        }
        cout<<endl;
        i++;
    }
    
    return 0;
}

int p14(){
       int n;
    cout<<"Enter number ";
    cin >> n;

    int i = 1;
    char value = 'A';
    // i for number of rows
    while (i <= n)
    { 
       
        int j = 1; //for number of columns
       
        while(j<=i){
            
            cout<<value;
            value++;
            
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
// p7b();
// p8();
// p9();
// p10();
// p11();
// p12();
// p13();
p14();
    return 0;
}