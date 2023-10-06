// 0 1 1 2 3 5 8 13 21 .......
// n = (n-1) + (n-2)
#include<iostream>
using namespace std;


int main(){
    
    int n;
    cout<<"Enter numbers to be in sequence"<<endl;
    cin>>n;
    int a = 0;
     int b = 1;
     cout<<a<<endl;
     cout<<b<<endl;
    for (int  i = 1; i <= n; i++)
    {
        int nextNumber = a+b;
        cout<<nextNumber<<endl;
        a = b;
        b = nextNumber;
    }
    
    return 0;
}