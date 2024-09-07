#include<iostream>
using namespace std;

#define ll long long

ll fastExponentiation(ll a, ll b, ll m){
    ll res = 1;
    while(b>0){

        if(b&1){
            //odd power
            res = ( res*a )%m;
        }
        a = (a*a)%m;
        b = b>>1;
    }
    return res;
}

int main()
{
    cout<<fastExponentiation(3,13,1000000007);
    
    return 0;
}
