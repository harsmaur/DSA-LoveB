#include<iostream>
using namespace std;

int factorial(int n){
    int ans = 1;
    for(int i =1; i<=n; i++){
        ans = ans*i;
    }
    return ans;
}


int nCr(int n, int r){
 int numerator = factorial(n);
 int denominator = factorial(r) * factorial(n-r);
 return numerator/denominator;
}


int main()
{
    int n, r;
    cout<<"Enter n and r"<<endl;
    cin>>n>>r;

   cout<< nCr(n, r)<<endl;

    
    return 0;
}