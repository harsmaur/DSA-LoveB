#include<iostream>
using namespace std;

int countStairs(int nStairs){

    if(nStairs < 0){
        return 0;
    }
    if(nStairs==0){
        return 1;
    }

    return countStairs(nStairs-1) + countStairs(nStairs-2);

}
int main()
{
    int n;
    cin>>n;
    cout<<countStairs(n)<<endl;
    
    return 0;
}