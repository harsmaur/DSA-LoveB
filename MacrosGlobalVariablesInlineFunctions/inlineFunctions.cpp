#include<iostream>
using namespace std;


inline int getMax(int &a, int &b){
 return (a>b) ? a : b;
}

//reduced function call stack 
//no exra m/m usage
//compiler replaces the inline functioncall with its body 
int main()
{

    int a = 1, b = 2;
    int ans = 0;

    // ans = (a>b) ? a : b;
    ans = getMax(a, b);
    cout<<ans<<endl;
    return 0;
}