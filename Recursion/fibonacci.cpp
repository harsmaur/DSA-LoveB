#include<iostream>
using namespace std;

int fibonacci(int n){
    //base case
    if(n<=1){
        return n;
    }
    // RR
    return fibonacci(n-1) + fibonacci(n-2);

    }

int main()
{
     int n;
     cin>>n;

    int ans = fibonacci(n);
    cout<<ans<<endl;
    return 0;
}