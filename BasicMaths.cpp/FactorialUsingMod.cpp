//find factorial of 212 using mod and so that int limit is not exceeded

#include<iostream>
using namespace std;

int findFactorial(int n){
 int m = 1000000007;
 int res = 1;
 for(int i = 2; i<=n; ++i){
    res = (res*1LL*i)%m;
 }
 return res;
}

int main()
{
    cout<<findFactorial(212);
    
    return 0;
}