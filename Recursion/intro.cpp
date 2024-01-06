#include<iostream>
using namespace std;


int factorial(int n){
    // base case write first with return 
    if(n==0){
        return 1;
    }
    

    // int smallProblem = factorial(n-1);
    // int bigProblrm = n * smallProblem;
    // return bigProblrm;

    return factorial(n-1) * n;
}
int main()
{
    int n;;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;
    return 0;
}