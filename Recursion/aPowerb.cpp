#include<iostream>
using namespace std;

int power(int a, int b){
    //base cases
    if(b==0){
        return 0;

    }
    if(b==1){
        return a;
    }

    int ans = power(a, b/2);

    if(b&1){ //odd b
        return ans*ans*a;
    }
    else{ // even b
        return ans*ans;
    }



}
int main()
{
    int a,b;
    cin>>a>>b;

    cout<<power(a,b)<<endl;
    return 0;
}