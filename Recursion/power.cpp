#include<iostream>
using namespace std;

int power(int n){
    //Base Case
    if(n==0){
        return 1;

    }

    //Recursive Relation
    // int smallerProblem = power(n-1);
    // int bigProblem = 2* smallerProblem;

    // return bigProblem;

    return power(n-1) * 2;


}
int main()
{
    int n;
    cin>>n;
    int ans = power(n);
    cout<<ans<<endl;
    return 0;
}